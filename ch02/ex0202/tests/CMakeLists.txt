cmake_minimum_required(VERSION 3.16)

set(Sources
    ex0202tests.cpp
)

add_executable(ex0202tests ${Sources})

target_link_libraries(ex0202tests
    PUBLIC
        gtest_main
        ex0202
)

add_test(NAME ex0202tests COMMAND ex0202tests)
