/*** Arduino with PIR Sensor LED and Buzzer ***/
int PIRSensor = 2; //Define PIR Sensor pin
int Buzzer = 5; //PWM (~) pin
int LED = 4; //Define LED pin
int SensorValue = 0; // Initializing the value as zero at the beginning
  
void setup() {
pinMode(Buzzer, OUTPUT);
pinMode(LED, OUTPUT);
pinMode(PIRSensor, INPUT);
Serial.begin(9600);
}

void loop() {
SensorValue = digitalRead(PIRSensor); // The value read from PIR Sensor pin 2 will be assigned to 'SensorValue'
if(SensorValue == HIGH){
  digitalWrite(LED, HIGH); // Turn LED ON
  tone(Buzzer, 5000); //the buzzer sound frequency at 5000 Hz. The frequency range is from 31 Hz to 65535 Hz.
  Serial.println("Motion Detected"); // Print this text in Serial Monitor
}
else 
{
  digitalWrite(LED, LOW);
  noTone(Buzzer);
  Serial.println("Motion not Detected");
}
}
