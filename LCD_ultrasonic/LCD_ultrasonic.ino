#include <Adafruit_LiquidCrystal.h>

#define trigpin 2
#define echopin 3
#define buzzer 2
long duration; //pulseIn outputs long
int distance;


Adafruit_LiquidCrystal lcd_1(0);
void setup()
{
  lcd_1.begin(16, 2);
  lcd_1.print("Welcome");
  delay(1000);
  
  lcd_1.clear();
  Serial.begin(9600);
  lcd_1.setCursor(0, 0);
  
 pinMode(trigpin,OUTPUT);
 pinMode(echopin,INPUT);

}
void loop()
{
  digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW);
 delayMicroseconds(10);
 duration = pulseIn(echopin,HIGH); //remember Distance = Time * Speed
 distance = duration * 0.034 / 2.0;
 Serial.print("Distance is ");
 Serial.print(distance); 
  
    lcd_1.setCursor(0, 0);
  lcd_1.print("Distance: ");
  lcd_1.print(distance); 
}
