//
// Created by erick-hdz on 20/05/20.
//

#ifndef POOL_PROYECT_COFFE_DRINK_H
#define POOL_PROYECT_COFFE_DRINK_H

#include "iostream"
#include "string"
#include "Hot_Drink.h"

class Coffe_Drink: public Hot_Drink {
    //here we can use the implementations as public to store in the next sense
public:
    //here we have the default constructor as we can see;
    void prepare(double volume) override{
        std::cout <<
        "Take the recipient and some coffee" << volume <<
        "ml,and some sugar" << std::endl;
    }

};


#endif //POOL_PROYECT_COFFE_DRINK_H
