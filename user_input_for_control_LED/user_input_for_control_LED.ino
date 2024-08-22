int red=7;
int yellow=8;
int green=9;
bool blinkgreen=false;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter 'b'to blink green LED,'y' for illuminated yellow LED,'g' to illuminated green LED,'r'to illuminated red LED");
  
}

void loop() {
  if(Serial.available()>0){
    char user=Serial.read();
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(green,LOW);
    switch(user){
      case 'b':
      blinkgreen=true;
      break;
      
      case 'r':
      digitalWrite(red,HIGH);
      break;
      
      case 'y':
      digitalWrite(yellow,HIGH);
      break;
      
      case 'g':
      digitalWrite(green,HIGH);
      break;
      
      default:
      Serial.println("Invalid Input");
      break;
    }
  }
  if(blinkgreen){
    digitalWrite(green,HIGH);
    delay(200);
    digitalWrite(green,LOW);
    delay(200);
  }
}
