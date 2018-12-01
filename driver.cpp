//
// Created by dldms on 11/30/2018.
//
#include <iostream>
#include "maze_game.hpp"
#include "enchanted_fairy_maze.hpp"
#include "futuristic_dystopian_maze.hpp"
/**
 * Main driver to run the program.
 * Create the fairy and dystopian maze.
 * @return
 */
int main() {
    maze_game factory;

    enchanted_fairy_maze_factory* fairy_maze = new enchanted_fairy_maze_factory();
    factory.create_maze(*fairy_maze);

    futuristic_dystopian_maze_factory* future_maze = new futuristic_dystopian_maze_factory();
    factory.create_maze(*future_maze);
    return 0;
}
