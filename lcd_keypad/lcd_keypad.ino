#include <Adafruit_LiquidCrystal.h>
#include <Keypad.h>
#include <stdlib.h>

Adafruit_LiquidCrystal lcd_1(0);

const int ROW_NUM = 4; //four rows
const int COLUMN_NUM = 4; //th

char keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3', 'A'},
  {'4','5','6', 'B'},
  {'7','8','9', 'C'},
  {'*','0','#', 'D'}
};

byte pin_rows[ROW_NUM] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {5, 4, 3, 2}; //
Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );


void setup()
{
  lcd_1.begin(16, 2);
  lcd_1.print("Calculator");
  delay(1000);
  
  lcd_1.clear();
  Serial.begin(9600);
  lcd_1.setCursor(0, 0);

}

void loop()
{
 
  char key = keypad.getKey();
  if(key){
  Serial.println(key);
    lcd_1.print(key);
  }
}
