cmake_minimum_required(VERSION 3.8)
project(schuelerverwaltung)

set(CMAKE_C_STANDARD 99 UK)

set(SOURCE_FILES main.c funktion.c header.h)
add_executable(schuelerverwaltung ${SOURCE_FILES})