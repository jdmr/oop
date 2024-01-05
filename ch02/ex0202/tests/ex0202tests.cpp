#include <gtest/gtest.h>

#include "../ex0202.hpp"

TEST(ex0202Tests, generate_table) {
  std::string expected =
      "1990\t\t135\n1991\t\t7290\n1992\t\t11300\n1993\t\t16200\n";
  EXPECT_EQ(expected, generate_table());
}