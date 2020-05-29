//
// Created by erick-hdz on 20/05/20.
//

#ifndef POOL_PROYECT_DRINK_TEA_H
#define POOL_PROYECT_DRINK_TEA_H
#include "Hot_Drink.h"
#include "Make_Drink_Hot_Fact.h"
#include "iostream"
//here we can use the next part of the main as the main example
//As we can see


//this is a interface as instance of the real way as we can see
class Drink_tea: public Hot_Drink {
public:
    void prepare(double volume) override{
        std::cout << "Take a cup of tea and do the next "
                  << volume << "and put some of sugar" << std::endl;
    }

};


#endif //POOL_PROYECT_DRINK_TEA_H
