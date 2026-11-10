cmake_minimum_required(VERSION 3.15)

# Enables both C and C++ compilers
project(MixedLanguageProject LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# List all your files together here
add_executable(my_program 
    main.cpp
    c_logic.c
    c_logic.h
)
