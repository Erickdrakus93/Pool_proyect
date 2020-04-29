//
// Created by erick-hdz on 27/04/20.
//

#ifndef POOL_PROYECT_CONTROL_H
#define POOL_PROYECT_CONTROL_H
#include "iostream"
//this is a trivial example as we can see
class Control {
public:
    Control(){
        std::cout << "The control is constructed" << std::endl;
    }
    ~Control(){
        std::cout << "The control is Destructed" << std::endl;
    }
    static void Increment_to_Speed(int Speed){
        std::cout << "Speed at" << Speed << std::endl;
    }
};
#endif //POOL_PROYECT_CONTROL_H
