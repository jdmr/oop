cmake_minimum_required(VERSION 3.16)

set(This ex0101app)

set(Sources
    ex0101app.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    ex0101
)
