//
// Created by dldms on 11/30/2018.
//

#ifndef LAB09_MAZE_GAME_HPP
#define LAB09_MAZE_GAME_HPP

#include "maze_factory.hpp"
class maze_game {

    public:
        /**
         * Create maze.
         * @param m
         * @return
         */
        maze* create_maze(maze_factory& m) {
            maze* maze = m.make_maze();
            wall* wall = m.make_wall();
            room* room1 = m.make_room();
            room* room2 = m.make_room();
            door* door = m.make_door(*room1, *room2);
            maze->add_wall(wall);
            maze->add_room(room1);
            maze->add_room(room2);
            maze->add_door(door);
            return maze;
        };
        /**
         * Destruct the maze game.
         */
        virtual ~maze_game() {};
};
#endif //LAB09_MAZE_GAME_HPP
