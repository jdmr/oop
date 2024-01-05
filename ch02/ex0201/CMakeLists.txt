cmake_minimum_required(VERSION 3.16)

project(ex0201 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_subdirectory(googletest)

set(Headers
    ex0201.hpp
)

set(Sources
    ex0201.cpp
)

add_library(ex0201 STATIC ${Sources} ${Headers})

add_subdirectory(tests)
add_subdirectory(app)