#include <LCD_1602_RUS.h>

LCD_1602_RUS lcd(0x27, 16, 2);

void setup()
{
  String str;
  str = "по-русски";

  lcd.init();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(2, 0);
  lcd.print("Теперь можно");
  lcd.setCursor(3, 1);
  lcd.print(str);

}

void loop()
{
}
