//
// Created by erick-hdz on 21/05/20.
//

#ifndef POOL_PROYECT_PERSON_BUILDER_BASE_H
#define POOL_PROYECT_PERSON_BUILDER_BASE_H

#include "iostream"
#include "Person.h"
#include "Person_buiild_for_direction.h"
#include "Person_build_by_pos.h"

class Person_builder_base {
protected:
    Person& person;
   explicit  Person_builder_base(Person& per):person(per){};
   //here we can declare in the next terms as we can see
public:
    operator Person() const{
        return std::move(person);
    };

    Person_buiild_for_direction where() const {
        return Person_buiild_for_direction(person);
    };
    //here we can access as the last as we can see
    Person_build_by_pos at_job() const{
        return Person_build_by_pos(person);
    }


};


#endif //POOL_PROYECT_PERSON_BUILDER_BASE_H
