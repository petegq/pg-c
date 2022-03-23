cmake_minimum_required(VERSION 3.21)
project(C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(
        dec2hex.c
        ex19.c
        example.c
        main.c)
