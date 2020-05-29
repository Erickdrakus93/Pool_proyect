//
// Created by erick-hdz on 20/05/20.
//

#ifndef POOL_PROYECT_DRINK_FACTORY_H
#define POOL_PROYECT_DRINK_FACTORY_H
#include "iostream"
#include "Make_Drink_Hot_Fact.h"
#include "map"
#include "Coffe_Factory.h"
#include "Drink_tea.h"
#include "tea_factory.h"
#include "functional"

class Drink_Factory {
private:
    //here we can use the next structure as we can note;
    std::map<std::string,std::unique_ptr<Make_Drink_Hot_Fact>> hot_factories;
    //here we can construct as we can see the next part of the main
public:
    Drink_Factory(){
         hot_factories["Coffee"] = std::make_unique<Coffe_Factory>();
         //here we can consider the another form as we can note in
         //the next part of the main form
         hot_factories["tea"] = std::make_unique<tea_factory>();
    }
    //this is the manner as we can see int the next lines as we can see
    std::unique_ptr<Hot_Drink> make_drink(const string& name,double volume){
        auto drink = hot_factories[name]->create();
        drink->prepare(volume);
        return drink;
    }
    //all the constructors as we can note in the last lines of the code as we can see
};


#endif //POOL_PROYECT_DRINK_FACTORY_H
