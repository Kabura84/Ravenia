project(RAVENIA_CLIENT)

cmake_minimum_required(VERSION 2.8)

set (CMAKE_CXX_FLAGS "-fpermissive")
include_directories(Network)
include_directories(Logger)

set (APP_SOURCES
        Ravenia.cpp
        Network/RaveniaClient.cpp
        Logger/Logger.cpp)

add_executable(ravenia ${APP_SOURCES})