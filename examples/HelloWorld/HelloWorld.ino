#include "LCD_1602_RUS.h"

LCD_1602_RUS lcd(0x27, 16, 2);

void setup()
{
  lcd.init();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(2, 0);
  lcd.print(L"Теперь можно");
  lcd.setCursor(3, 1);
  lcd.print(L"по-русски");

}

void loop()
{
}
