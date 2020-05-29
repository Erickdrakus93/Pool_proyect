//
// Created by erick-hdz on 21/05/20.
//

#ifndef POOL_PROYECT_PERSON_BUIILD_FOR_DIRECTION_H
#define POOL_PROYECT_PERSON_BUIILD_FOR_DIRECTION_H

#include "Person_builder_base.h"
#include "iostream"

using namespace std;
class Person_buiild_for_direction: public Person_builder_base {
public:
  explicit Person_buiild_for_direction(Person& per):Person_builder_base(per){};

  Person_buiild_for_direction& at(const std::string& street_address){
      person.street_address = street_address;
      return *this;
  }
  Person_buiild_for_direction& in(const std::string& city){
      person.city = city;
      return *this;
  }
  Person_buiild_for_direction& with(const std::string& code){
      person.code_post = code;
      return *this;
  }

};


#endif //POOL_PROYECT_PERSON_BUIILD_FOR_DIRECTION_H
