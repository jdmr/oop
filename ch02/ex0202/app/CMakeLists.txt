cmake_minimum_required(VERSION 3.16)

set(Sources
    ex0202app.cpp
)

add_executable(ex0202app ${Sources})
target_link_libraries(ex0202app PUBLIC ex0202)
