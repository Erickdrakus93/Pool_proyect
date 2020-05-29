//
// Created by erick-hdz on 20/05/20.
//

#ifndef POOL_PROYECT_MAKE_DRINK_HOT_FACT_H
#define POOL_PROYECT_MAKE_DRINK_HOT_FACT_H
#include "iostream"
#include "ios"
#include "memory"
#include "Hot_Drink.h"

class Make_Drink_Hot_Fact {
public:
    //this is the manner as we can note
    virtual std::unique_ptr<Hot_Drink> create() const = 0;

};


#endif //POOL_PROYECT_MAKE_DRINK_HOT_FACT_H
