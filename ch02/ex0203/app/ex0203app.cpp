#include <iostream>

#include "../ex0203.hpp"

int main(int argc, char* argv[]) {
  int var = 10;
  std::cout << var << std::endl;
  var = multiplyByTwo(var);
  std::cout << var << std::endl;
  var = subtractOne(var);
  std::cout << var << std::endl;
  return 0;
}