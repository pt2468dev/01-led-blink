#include <avr/io.h>
#include "LEDController.h"

void LEDController::init(void) {
  // Set PL7 as output port
  DDRB |= (1<<7);
}

void LEDController::turnLEDOn(void) {
  PORTB |= (1<<7);
}

void LEDController::turnLEDOff(void) {
  PORTB &= ~(1<<7);
}
