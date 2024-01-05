#include "ex0202.hpp"

#include <iomanip>

// generate table
std::string generate_table() {
  std::string table;
  table += std::to_string(1990) + "\t\t" + std::to_string(135) + "\n" +
           std::to_string(1991) + "\t\t" + std::to_string(7290) + "\n" +
           std::to_string(1992) + "\t\t" + std::to_string(11300) + "\n" +
           std::to_string(1993) + "\t\t" + std::to_string(16200) + "\n";
  return table;
}