cmake_minimum_required(VERSION 3.16)

set(This ex0101)

project(${This} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(googletest)

set(Headers
    ex0101.hpp
)

set(Sources
    ex0101.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(tests)
add_subdirectory(app)