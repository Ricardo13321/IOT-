#include <TM1637Display.h>
#define DIO 2
#define CLK 3

TM1637Display display(CLK, DIO);

void setup() {
  // put your setup code here, to run once:
  display.setBrightness(7);
}

void loop() {
  // put your main code here, to run repeatedly:
  display.showNumberDec(1234);
  delay(100);
}
