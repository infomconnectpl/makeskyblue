#include "esphome.h"
#include "makeskyblue/makeskyblue_controller.h"

MakeSkyBlueController* msb_controller;

void setup() {
  msb_controller = new MakeSkyBlueController(id(uart_msb));
  App.register_component(msb_controller);
}
