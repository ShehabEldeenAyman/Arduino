#define ledPin 10 #define btn1 2 #define btn2 3 volatile int x = 0; // variable to be updated by the interrupt
void setup() { pinMode(ledPin, OUTPUT); pinMode(btn1, INPUT_PULLUP); pinMode(btn2, INPUT_PULLUP); Serial.begin(9600); //enable interrupt 0 (pin 2) which is connected to a button 1
//enable interrupt 1 (pin 3) which is connected to a button 2
attachInterrupt(digitalPinToInterrupt(2), buttonPressed1 ,FALLING); attachInterrupt(1, buttonPressed2 ,FALLING); }

void loop() { //pretend doing something useful Serial.print("The X value is"); Serial.println(x); digitalWrite(13,HIGH); delay(2000); digitalWrite(13,LOW); delay(2000); } // Interrupt service routine for interrupt 0
void buttonPressed1() { x++; digitalWrite(ledPin, HIGH); } // Interrupt service routine for interrupt 1
void buttonPressed2() { x--; digitalWrite(ledPin, LOW); }
