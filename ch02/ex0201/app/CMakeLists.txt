cmake_minimum_required(VERSION 3.16)

set(Sources
    ex0201app.cpp
)

add_executable(ex0201app ${Sources})
target_link_libraries(ex0201app PUBLIC ex0201)