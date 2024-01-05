cmake_minimum_required(VERSION 3.16)

set(Sources
    ex0201tests.cpp
)

add_executable(ex0201tests ${Sources})

target_link_libraries(ex0201tests
    PUBLIC
        gtest_main
        ex0201
)

add_test(NAME ex0201tests COMMAND ex0201tests)