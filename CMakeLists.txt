project(RAVENIA_CLIENT)

cmake_minimum_required(VERSION 2.8)

set (CMAKE_CXX_FLAGS "-fpermissive")
include_directories(Network)
include_directories(Logger)
include_directories(Game)

add_subdirectory(./UnitTests)

set (APP_SOURCES
        Ravenia.cpp
        Network/RaveniaClient.cpp
        Logger/Logger.cpp
        Game/Board.cpp
        Game/Item.cpp
        Game/Monster.cpp
        Game/Player.cpp
        Game/State.cpp)

add_executable(ravenia ${APP_SOURCES})
