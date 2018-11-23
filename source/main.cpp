#include <avr/io.h>
#include <util/delay.h>

// Class declaration
class LEDController {
  public:
    void init(void);
    void turnLEDOn(void);
    void turnLEDOff(void);
};

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

int main(void) {
  LEDController led_1_controller;
  led_1_controller.init();
  while(1) {
    led_1_controller.turnLEDOn();
    _delay_ms(500);
    led_1_controller.turnLEDOff();
    _delay_ms(500);
  }
}