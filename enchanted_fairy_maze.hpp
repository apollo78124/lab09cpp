//
// Created by dldms on 11/30/2018.
//

#ifndef LAB09_ENCHANTED_FAIRY_MAZE_HPP
#define LAB09_ENCHANTED_FAIRY_MAZE_HPP

#include "maze_factory.hpp"

/**
 * Fairy room class.
 */
class enchanted_fairy_room: public room {
    virtual void print() {
        cout<<"enchanted_fairy_room"<<endl;
    }
};

/**
 * Fairy door class.
 */
class enchanted_fairy_door: public door {


    virtual void print() {
        cout<<"enchanted_fairy_door"<<endl;
    }
};

/**
 * Fairy wall class.
 */
class enchanted_fairy_wall: public wall {
    virtual void print() {
        cout<<"enchanted_fairy_wall"<<endl;
    }
};

/**
 * Fairy maze class.
 */
class enchanted_fairy_maze: public maze {
    virtual void print() {
        cout<<"enchanted_fairy_maze"<<endl;
    }
};

/**
 * Factory class to create the fairy maze.
 * Derived from maze_factory.
 */
class enchanted_fairy_maze_factory : public maze_factory {
public:
    /**
     * Make the maze.
     * @return
     */
   virtual maze* make_maze() override {
       cout << "Creating maze for enchanted fairy maze\n";
       return new maze();
   }

   /**
    * Make wall.
    * @return
    */
    virtual wall*  make_wall() override {
       cout << "Creating wall for enchanted fairy maze\n";
       return new enchanted_fairy_wall();
   }

   /**
    * Make room.
    * @return
    */
    virtual room*  make_room() override {
       cout << "Creating room for enchanted fairy maze\n";
       return new enchanted_fairy_room();
   }

   /**
    * Make door.
    * @param r1
    * @param r2
    * @return
    */
    virtual door*  make_door(room& r1, room& r2) override {
       cout << "Creating door for enchanted fairy maze\n";
        return new enchanted_fairy_door();
   }

};

#endif //LAB09_ENCHANTED_FAIRY_MAZE_HPP
