#pragma once

#include "esphome.h"
#include "esphome/components/uart/uart.h"

class MakeSkyBlueController : public Component, public UARTDevice {
 public:
  MakeSkyBlueController(UARTComponent *parent) : UARTDevice(parent) {}

  Sensor *batt_voltage = new Sensor();
  Sensor *batt_current = new Sensor();
  Sensor *solar_voltage = new Sensor();
  Sensor *solar_power = new Sensor();
  Sensor *temperature = new Sensor();
  Sensor *energy_kwh = new Sensor();

  void setup() override {
    // inicjalizacja, np. resetowanie buforów
  }

  void loop() override {
    // przykład odczytu UART (musisz dopasować do swojego protokołu)
    uint8_t buf;
    if (this->uart_->read_byte(&buf)) {
      // przetwarzanie odebranego bajtu
    }
  }
};
