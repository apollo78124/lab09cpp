//
// Created by dldms on 11/30/2018.
//

#ifndef LAB09_MAZE_FACTORY_HPP
#define LAB09_MAZE_FACTORY_HPP
#include <iostream>
#include "maze.hpp"

using namespace std;
/**
 * Maze factory virtual class.
 */
class maze_factory {
public:
    /**
     * Make the maze.
     * @return
     */
    virtual maze* make_maze() = 0;

    /**
     * Make the wall.
     * @return
     */
    virtual wall*  make_wall() = 0;

    /**
     * Make the room
     * @return
     */
    virtual room*  make_room() = 0;

    /**
     * Make door.
     * @param r1
     * @param r2
     * @return
     */
    virtual door*  make_door(room& r1, room& r2) = 0;
};
#endif //LAB09_MAZE_FACTORY_HPP
