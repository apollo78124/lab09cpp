cmake_minimum_required(VERSION 3.12)
project(lab09)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

add_executable(lab09 driver.cpp futuristic_dystopian_maze.hpp enchanted_fairy_maze.hpp maze_factory.hpp maze.hpp door.hpp wall.hpp room.hpp maze_game.hpp)