cmake_minimum_required(VERSION 3.7)
project(FinalPracticeCs2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Person.cpp Person.h Student.cpp Student.h)
add_executable(FinalPracticeCs2 ${SOURCE_FILES})