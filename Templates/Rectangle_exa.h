//
// Created by erick-hdz on 19/05/20.
//

#ifndef POOL_PROYECT_RECTANGLE_EXA_H
#define POOL_PROYECT_RECTANGLE_EXA_H

#include "iostream"
#include "Shape_exa.h"

class Rectangle_exa: public Shape_exa {
public:
    int getArea(){
        return (width*height);
    }

};


#endif //POOL_PROYECT_RECTANGLE_EXA_H
