
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DS3231.h>
DS3231 clock;
bool century = false;
bool h12Flag;
bool pmFlag;
LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  Serial.begin(9600);
  Wire.begin();
  lcd.init();                      // initialize the lcd
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(clock.getYear(), DEC);
  lcd.print("-");
  lcd.print(clock.getMonth(century), DEC);
  lcd.print("-");
  lcd.print(clock.getDate(), DEC);
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Exam time Raju");




}


void loop()
{
  delay(100);
  Serial.print(clock.getYear(), DEC);
  Serial.print("-");
  Serial.print(clock.getMonth(century), DEC);
  Serial.print("-");
  Serial.print(clock.getDate(), DEC);
  Serial.print(" ");
  Serial.print(clock.getHour(h12Flag, pmFlag), DEC); //24-hr
  Serial.print(":");
  Serial.print(clock.getMinute(), DEC);
  Serial.print(":");
  Serial.println(clock.getSecond(), DEC);

  lcd.setCursor(8, 1);
  lcd.print(clock.getHour(h12Flag, pmFlag), DEC); //24-hr
  lcd.print(":");
  lcd.print(clock.getMinute(), DEC);
  lcd.print(":");
  lcd.println(clock.getSecond(), DEC);



}
