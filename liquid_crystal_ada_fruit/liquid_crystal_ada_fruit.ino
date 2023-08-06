#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);
void setup()
{
lcd_1.begin(16, 2);
lcd_1.print("Welcome");
delay(1000);
lcd_1.clear();
Serial.begin(9600);
lcd_1.setCursor(0, 0);
}
void loop()
{
lcd_1.setCursor(0, 0);
lcd_1.print("Hello");
}
