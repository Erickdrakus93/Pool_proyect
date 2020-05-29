//
// Created by erick-hdz on 21/05/20.
//

#ifndef POOL_PROYECT_PERSON_BUILDER_H
#define POOL_PROYECT_PERSON_BUILDER_H

#include "iostream"
#include "Person_builder_base.h"

using namespace std;
class Person_builder: public Person_builder_base{
public:
    explicit Person_builder():Person_builder_base(person){};
private:
    Person person;
};


#endif //POOL_PROYECT_PERSON_BUILDER_H
