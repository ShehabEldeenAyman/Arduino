#define L1Red 8 #define L1Yellow 9 #define L1Green 10 #define L2Red 11 #define L2Yellow 12 #define L2Green 13
void setup() { pinMode(2, INPUT_PULLUP);
for (int i = 8; i < 14; i++){ pinMode(i, OUTPUT); } attachInterrupt(0,crossing,FALLING); digitalWrite(L1Green, HIGH); digitalWrite(L2Red, HIGH); }
void loop() { digitalWrite(L1Green, LOW); digitalWrite(L1Yellow, HIGH); delay(1000); digitalWrite(L1Yellow,LOW); digitalWrite(L1Red,HIGH); delay(1500); digitalWrite(L2Red,LOW); digitalWrite(L2Green, HIGH); delay(2000); digitalWrite(L2Green, LOW); digitalWrite(L2Yellow, HIGH); delay(1000); digitalWrite(L2Yellow,LOW); digitalWrite(L2Red,HIGH); delay(1000); digitalWrite(L1Red, LOW); digitalWrite(L1Green, HIGH); delay(2000); }

void crossing() { if (digitalRead(L2Green == LOW)) { delay(2000); digitalWrite(L1Green, LOW); digitalWrite(L1Yellow, HIGH); delay(1000); digitalWrite(L1Yellow,LOW); digitalWrite(L1Red,HIGH); delay(1500); digitalWrite(L2Red,LOW); digitalWrite(L2Green, HIGH); delay(2000); digitalWrite(L2Green, LOW); digitalWrite(L2Yellow, HIGH); delay(1000); digitalWrite(L2Yellow,LOW); digitalWrite(L2Red,HIGH); delay(1000); digitalWrite(L1Red, LOW); digitalWrite(L1Green, HIGH); delay(2000); } }
