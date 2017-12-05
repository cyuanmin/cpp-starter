#include <iostream>
#include "model.h"
#include "helper.h"

int main() {
  Helper helper;
  std::cout << model_lib::return_num(4) << std::endl;
  helper.test();
}