#include "LCD_1602_RUS.h"

LCD_1602_RUS lcd(0x27, 16, 2);

const wchar_t str1[] PROGMEM = L"Теперь можно";
const wchar_t str2[] PROGMEM = L"по-русски";

void setup()
{
  lcd.init();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(2, 0);
  lcd.print(str1);
  lcd.setCursor(3, 1);
  lcd.print(str2);

}

void loop()
{
}
