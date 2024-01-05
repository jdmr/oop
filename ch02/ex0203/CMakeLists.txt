cmake_minimum_required(VERSION 3.16)

set(This ex0203)

project(${This} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_subdirectory(googletest)

set(Headers
    ex0203.hpp
)

set(Sources
    ex0203.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(tests)
add_subdirectory(app)