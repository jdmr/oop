#include <iostream>

#include "../ex0201.hpp"

int main() {
  double gallons;
  std::cout << "Enter the number of gallons: ";
  std::cin >> gallons;
  std::cout << gallons << " gallons is " << gallons_to_cubic_feet(gallons)
            << " cubic feet.\n";
}