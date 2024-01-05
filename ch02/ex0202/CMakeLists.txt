cmake_minimum_required(VERSION 3.16)

project(ex0202 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_subdirectory(googletest)

set(Headers
    ex0202.hpp
)

set(Sources
    ex0202.cpp
)

add_library(ex0202 STATIC ${Sources} ${Headers})

add_subdirectory(tests)
add_subdirectory(app)
