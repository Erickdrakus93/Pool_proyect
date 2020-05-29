//
// Created by erick-hdz on 20/05/20.
//

#ifndef POOL_PROYECT_TEA_FACTORY_H
#define POOL_PROYECT_TEA_FACTORY_H

#include "iostream"
#include "Make_Drink_Hot_Fact.h"
#include "Drink_tea.h"

class tea_factory: public Make_Drink_Hot_Fact {
    std::unique_ptr<Hot_Drink> create()const  override{
        return std::make_unique<Drink_tea>();
    }

};


#endif //POOL_PROYECT_TEA_FACTORY_H
