#include "../ex0101.hpp"
#include <gtest/gtest.h>
#include <string>

TEST(ex0101, hello)
{
    std::string expected = "Hello, World!";
    std::string actual = hello("World");
    EXPECT_EQ(expected, actual);
}