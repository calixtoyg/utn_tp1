cmake_minimum_required(VERSION 3.12)
project(TP1 C)

set(CMAKE_C_STANDARD 11)

include_directories(headers)

add_executable(TP1
    backup/funcionesSuRMDF.c
    headers/funcionesSuRMDF.h
    funcionesSuRMDF.c
    main.c)
