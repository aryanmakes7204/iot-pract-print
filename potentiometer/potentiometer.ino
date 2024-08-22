void setup() {
  pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
  pinMode(A1,INPUT);
  pinMode(5,OUTPUT);
  pinMode(A2,INPUT);
  pinMode(6,OUTPUT);

}

void loop() {
  analogWrite(3,analogRead(A0));
  analogWrite(5,analogRead(A1));
  analogWrite(6,analogRead(A2));
}
