void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);//green LEB
  pinMode(3,OUTPUT);//orange LED
  pinMode(2,OUTPUT);//red LED
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4,HIGH);//turn on green LED
  delay(3000);
  digitalWrite(4,LOW);//turn off green LED
  digitalWrite(3,HIGH);//turn on orange LED
  delay(1000); //wait 1 second
  digitalWrite(3,LOW);//turn off orangeLED
  digitalWrite(2,HIGH);//turn on redLED
  delay(3000);//wait 3 second
  digitalWrite(2,LOW);
  

}
