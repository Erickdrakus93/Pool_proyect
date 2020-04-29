//
// Created by erick-hdz on 27/04/20.
//

#ifndef POOL_PROYECT_ARRAY_H
#define POOL_PROYECT_ARRAY_H

#include <iostream>
#include "Vector_abstract.h"
#include "ios"

template<typename T,typename E>
class Array: public Vector_abstract<T>{
public:
    explicit Array(E last):Vector_abstract<T>(unsigned(last)+1){};
    Array(const Array<T,E>& array):Vector_abstract<T>(array){};
    T& operator[](E index){
        return Vector_abstract<T>::operator[](index);
    }
    //the destructor is inherited from the next part of the example as we can see
};


#endif //POOL_PROYECT_ARRAY_H
