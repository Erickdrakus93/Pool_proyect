//
// Created by erick-hdz on 21/05/20.
//

#ifndef POOL_PROYECT_PERSON_H
#define POOL_PROYECT_PERSON_H

#include "iostream"
#include "vector"
#include "memory"
#include "Person_builder_base.h"
#include "Person_builder.h"

class Person {
    /**
     * Here we can put the next friend classes as we can note
     */
    friend Person_builder;
    friend Person_build_by_pos;
    friend Person_buiild_for_direction;
    //the next is to use the next part of the main example
public:
    /**
     * Here we can divide in the next manner as we can see
     * Directions
     */
     std::string street_address,city,code_post;
     /**-
      * Here we can so divide for job position
      * Posture as worker
      */
      std::string job_position,Company;

    //default constructor as we can note

    Person()=default;
    Person(std::string& strt,std::string& cty,std::string& post){
        street_address = strt;
        city = cty;
        code_post = post;
    }
    Person(std::string& pos, std::string& compa){
        job_position =pos;
        Company = compa;
    }
    //here we can call the next create with smrt_pointer
    static std::unique_ptr<Person_builder> create(){
        return std::make_unique<Person_builder>();
    }
};


#endif //POOL_PROYECT_PERSON_H
