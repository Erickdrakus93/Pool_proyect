//
// Created by erick-hdz on 23/04/20.
//

#ifndef POOL_PROYECT_ITERATOR_H
#define POOL_PROYECT_ITERATOR_H

#include <iostream>
/**
 * This is the abstract class of objects in the next manner as we can see
 * @tparam T
 */
template<typename T>
class Iterator {
    virtual int reset() = 0;
    virtual T operator()()= 0;
    virtual T& operator=(T& t) = 0;
    virtual bool operator!() = 0;
    virtual int operator++()=0;
};


#endif //POOL_PROYECT_ITERATOR_H
