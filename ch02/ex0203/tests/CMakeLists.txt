cmake_minimum_required(VERSION 3.16)

set(This ex0203tests)

set(Sources
    ex0203tests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    ex0203
)

add_test(
    NAME ${This}
    COMMAND ${This}
)