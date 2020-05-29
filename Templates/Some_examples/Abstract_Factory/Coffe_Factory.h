//
// Created by erick-hdz on 20/05/20.
//

#ifndef POOL_PROYECT_COFFE_FACTORY_H
#define POOL_PROYECT_COFFE_FACTORY_H

#include "iostream"
#include "Make_Drink_Hot_Fact.h"
#include "memory"
#include "Coffe_Drink.h"
#include "Hot_Drink.h"

using namespace std;

class Coffe_Factory : public Make_Drink_Hot_Fact{
public:
     std::unique_ptr<Hot_Drink> create() const override{
         return make_unique<Coffe_Drink>();//this is the manner as we can see
     }
};  


#endif //POOL_PROYECT_COFFE_FACTORY_H
