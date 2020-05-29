//
// Created by erick-hdz on 22/05/20.
//

#include "iostream"
#include "string"
#include "Maybe.h"
#include "memory"

using namespace std;

struct Address{
    string* house_name = nullptr;
};

struct Person{
    Address* address = nullptr;

};

//here we can define the next part of the printer

void print_function_name(Person* person){
    if(person!= nullptr
    && person->address!= nullptr &&
    person->address->house_name!= nullptr){
        std::cout << *person->address->house_name << std::endl;
    }
}

//here we can consider the next part of the use