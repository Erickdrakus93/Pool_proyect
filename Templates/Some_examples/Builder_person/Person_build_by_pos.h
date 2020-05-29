//
// Created by erick-hdz on 21/05/20.
//

#ifndef POOL_PROYECT_PERSON_BUILD_BY_POS_H
#define POOL_PROYECT_PERSON_BUILD_BY_POS_H

#include "Person_builder_base.h"
#include "iostream"

class Person_build_by_pos: public Person_builder_base {
public:
      explicit Person_build_by_pos(Person& per):Person_builder_base(per){};
    //here we can call the next part of the use the data

    Person_build_by_pos& at_work(const std::string& work_pos){
        person.job_position = work_pos;
        return *this;
    }
    Person_build_by_pos& at_company( const std::string& compa){
        person.Company =compa;
        return *this;
    }


};


#endif //POOL_PROYECT_PERSON_BUILD_BY_POS_H
