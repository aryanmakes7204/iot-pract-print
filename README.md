# IoT Practical Programs - SPPU AIML

3. **Buzzer Program**: ![pract_3](buzzer)
4. **Blinking LED Program**: ![pract_4](blinking)
5. **Traffic Signals Program**: ![pract_5](traffic_signals)
6.  **User input for LED**: ![pract_6](user_input_for_control_LED)
7. **Square Number**: ![pract_7](square_number)
8. **Control LED by Potentiometer**: ![pract_8](potentiometer)
9. **temperature seen on Serial monitor**:![pract_9](temp_pract9)
10. **Minimum and Maximum temperature**:![pract_10](temp_pract10)
define LEDR 11
#define LEDG 13
#define LEDB 12

void setup() {                
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
}

int r = 0;
int g = 0;
int b = 0;
void loop() {
  r = random(0, 255);
  g = random(0, 255);
  b = random(0, 255);
  analogWrite(LEDR, r);
  analogWrite(LEDG, g);
  analogWrite(LEDB, b);
  delay(1000);
}
