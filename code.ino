#include <Adafruit_LiquidCrystal.h>

int counter = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16, 2);
  lcd_1.print("hello world");
}

void loop()
{
  lcd_1.setCursor(0,1);
  lcd_1.print(counter);
  delay(1000);
  counter += 1;
}
