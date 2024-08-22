int number;
int squared;
void setup() {
  Serial.begin(9600);
  Serial.println("enter the Number");

}

void loop() {
  if(Serial.available()>0){
    number=Serial.parseInt();
    squared=number * number;
    Serial.print("square of");
    Serial.print(number);
    Serial.print("is");
    Serial.println(squared);
    
  }
 
}
