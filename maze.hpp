//
// Created by dldms on 11/30/2018.
//

#ifndef LAB09_MAZE_HPP
#define LAB09_MAZE_HPP
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"
using namespace std;
class maze {
public:
    maze() = default;

    /*
     * Add room
     */
    virtual void add_room(room *r) { r->print(); };

    /**
     * Add wall
     * @param w
     */
    virtual void add_wall(wall *w) { w->print(); };

    /*
     * Add door.
     */
    virtual void add_door(door *d) { d->print(); };

    /*
     * print function that prints maze
     */
    virtual void print() {
        cout << "This is a maze!" << endl;
    }
};
#endif //LAB09_MAZE_HPP
