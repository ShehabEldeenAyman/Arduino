#define trigpin  5 
#define echopin  7 
#define buzzer 2
long duration; //pulseIn outputs long
int distance;

void setup(){ 
  Serial.begin(9600); 
  pinMode(trigpin,OUTPUT); 
  pinMode(echopin,INPUT); 
  pinMode(buzzer,OUTPUT); 

  } 
void loop(){ 
  digitalWrite(trigpin,HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trigpin,LOW); 
  delayMicroseconds(10); 
       duration = pulseIn(echopin,HIGH);  //remember Distance = Time * Speed 
  distance = duration * 0.034 / 2.0; 
  Serial.print("Distance is "); 
  Serial.print(distance); 
  if(distance<100)
    tone(buzzer,8000);
  if(distance>=100)
    noTone(buzzer);
  }
