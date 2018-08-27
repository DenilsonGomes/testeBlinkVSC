#include <Arduino.h>

void piscaled(int pino, int tempo){
    digitalWrite(pino, !digitalRead(pino));
    delay(tempo);
}