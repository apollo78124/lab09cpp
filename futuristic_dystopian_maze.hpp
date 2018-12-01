//
// Created by dldms on 11/30/2018.
//

#ifndef LAB09_FUTURISTIC_DYSTOPIAN_MAZE_HPP
#define LAB09_FUTURISTIC_DYSTOPIAN_MAZE_HPP
#include "maze_factory.hpp"

/**
 * Dystoppian room class.
 * Derived from room.
 */
class futuristic_dystopian_room: public room {
    virtual void print() {
        cout<<"futuristic_dystopian_room"<<endl;
    }
};

/**
 * Dystoppian door class.
 * Derived from door.
 */
class futuristic_dystopian_door: public door {


    virtual void print() {
        cout<<"futuristic_dystopian_door"<<endl;
    }
};

/**
 * Dystoppian maze class.
 * Derived from maze.
 */
class futuristic_dystopian_maze: public maze {
    virtual void print() {
        cout<<"futuristic_dystopian_maze"<<endl;
    }
};

/**
 * Dystoppian wall class.
 * Derived from wall.
 */
class futuristic_dystopian_wall: public wall {
    virtual void print() {
        cout<<"futuristic_dystopian_wall"<<endl;
    }
};

/**
 * Dystopian maze factory.
 */
class futuristic_dystopian_maze_factory : public maze_factory {
public:
    /**
     * Make the maze.
     * @return
     */
    maze* make_maze() override {
        cout << "Creating maze for futuristic_dystopian maze\n";
        return new futuristic_dystopian_maze();
    }
    /**
     * Make the wall.
     * @return
     */
    wall*  make_wall() override {
        cout << "Creating wall for futuristic_dystopian maze\n";
        return new futuristic_dystopian_wall();
    }
    /**
     * Make the room.
     * @return
     */
    room*  make_room() override {
        cout << "Creating room for futuristic_dystopian maze\n";
        return new futuristic_dystopian_room();
    }
    /**
     * Make the door.
     * @return
     */
    door*  make_door(room& r1, room& r2) override {
        cout << "Creating door for futuristic_dystopian maze\n";
        return new futuristic_dystopian_door();
    }

};
#endif //LAB09_FUTURISTIC_DYSTOPIAN_MAZE_HPP
