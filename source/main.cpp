#include <avr/io.h>
#include <util/delay.h>
#include "LEDController.h"

int main(void) {
  LEDController led_1_controller;
  led_1_controller.init();
  while(1) {
    led_1_controller.turnLEDOn();
    _delay_ms(1000);
    led_1_controller.turnLEDOff();
    _delay_ms(1000);
  }
}