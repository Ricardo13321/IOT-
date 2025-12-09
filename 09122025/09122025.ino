#include <Ultrasonic.h>
#include <TM1637Display.h>

#define DIO 3
#define CLK 2

TM1637Display display(CLK, DIO);

long distancia;
Ultrasonic ultrassom(8,7);
int buzzer = 10;

void setup () {
    Serial.begin(9600);
    display.setBrightness(1);
    display.showNumberDec(0);
}

void loop () {
    // Måler afstanden for hver 500ms
    distancia = ultrassom.distanceRead();
    Serial.println(distancia);
    if(distancia <= 15) {
       tone(buzzer, 2000);
    }
    else if(distancia <= 25) {
       tone(buzzer, 2000);
       delay(120);
       noTone(buzzer);
       delay(120);
    }
    else if(distancia <= 50) {
       tone(buzzer, 2000);
       delay(300);
       noTone(buzzer);
       delay(300);
    } else {
      noTone(buzzer);
    }
    display.showNumberDec(distancia);
}