cmake_minimum_required(VERSION 3.16)

set(This ex0203app)

set(Sources
    ex0203app.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    ex0203
)