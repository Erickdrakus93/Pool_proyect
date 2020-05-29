//
// Created by erick-hdz on 20/05/20.
//

#ifndef POOL_PROYECT_FACTORYBY_VOLUME_H
#define POOL_PROYECT_FACTORYBY_VOLUME_H

#include "iostream"
#include "Hot_Drink.h"
#include "functional"
#include "map"
#include "memory"
#include "Drink_tea.h"
#include "Coffe_Drink.h"

class Factory_by_volume{
private:
    std::map<std::string,std::function<std::unique_ptr<Hot_Drink>()>> factories;
    //here we can define the next part of the main as constructors
public:
    Factory_by_volume(){
        factories["tea"] = []{//this is the mood to call the functions as we can call
            auto tea = std::make_unique<Drink_tea>();
            tea->prepare(200);//here we can use the next prepare as ingredient in the next manner
            return tea;
        };
        factories["coffee"] =[]{
            auto coffee = std::make_unique<Coffe_Drink>();
            coffee->prepare(100);
            return coffee;
        };
    }
    //here we can call in the next sens
    //here we cann use the next as the part of inline function
    inline std::unique_ptr<Hot_Drink> make(const std::string& name,const double volume){
        auto drink = factories[name]();
        drink->prepare(volume);
        return drink;
    }
};


#endif //POOL_PROYECT_FACTORYBY_VOLUME_H
