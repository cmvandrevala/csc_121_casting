cmake_minimum_required(VERSION 3.15)

project("Getline")

set (CMAKE_CXX_STANDARD 14)

add_executable(1_implicit_cast 1_implicit_cast.cpp)
add_executable(2_c_style_cast 2_c_style_cast.cpp)
add_executable(3_c_style_cast_failure 3_c_style_cast_failure.cpp)
add_executable(4_static_cast 4_static_cast.cpp)
add_executable(5_toupper 5_toupper.cpp)
