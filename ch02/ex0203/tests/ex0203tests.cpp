#include <gtest/gtest.h>

#include "../ex0203.hpp"

TEST(ex0203Tests, multiplyByTwo) { EXPECT_EQ(20, multiplyByTwo(10)); }

TEST(ex0203Tests, subtractOne) { EXPECT_EQ(9, subtractOne(10)); }