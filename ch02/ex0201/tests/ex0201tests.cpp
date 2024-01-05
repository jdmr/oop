#include <gtest/gtest.h>

#include "../ex0201.hpp"

TEST(GallonsToCubicFeet, Zero) { EXPECT_EQ(0, gallons_to_cubic_feet(0)); }

TEST(GallonsToCubicFeet, One) {
  EXPECT_EQ(0.13367196898810318, gallons_to_cubic_feet(1));
}