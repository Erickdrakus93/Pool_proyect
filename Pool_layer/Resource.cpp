//
// Created by erick-hdz on 09/04/20.
//

#include "Resource.h"
#include <iostream>
#include <list>

class Resource{
    int value;
public:
    Resource(){
        value = 0;
    }
    void reset(){
        value =0;
    }
    int getValue(){
        return value;
    }
    void setValue(int number){
        value = number;
    }
};