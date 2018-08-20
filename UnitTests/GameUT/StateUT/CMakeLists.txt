cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project("GameStateUnitTests")

if(CMAKE_COMPILER_IS_GNUCXX)
    add_definitions(-std=gnu++0x)
endif()

enable_testing()

include_directories(../../Catch2Framework)

add_executable(StateUT StateUT.cpp
        ../../../Game/State.cpp)

add_test(StateUT GameStateTests)