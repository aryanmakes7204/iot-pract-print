const int temp36=A0;
float tfmax=-100;
float tfmin=100;
void setup() {
Serial.begin(9600);
}

void loop() {
  float val=analogRead(temp36);
  float mv=(val/1024.0)*500;
  float cel=(mv-500)/10;
  float farh=(cel*9.0/5.0)+32;

  if(farh>tfmax){
        tfmax=farh;
  }
  if(farh<tfmin){
     tfmin=farh;
  }
  Serial.print("TEMPERATURE:");
  Serial.print(farh);
  Serial.println("*F");
  Serial.print("Max:");
  Serial.print(tfmax);
  Serial.println("*F");
  Serial.print("Min:");
  Serial.print(tfmin);
  Serial.println("*F");
  Serial.println("Another Reading:-");
  delay(2000);
}
