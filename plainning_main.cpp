#include "process.h"
#include <iostream>

int main() {

  std::cout << "planning start" << std::endl;
  Process pro;
  pro.planProcess();
  std::cout << "planning end" << std::endl;
  return 0;
}