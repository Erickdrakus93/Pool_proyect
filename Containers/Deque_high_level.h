//
// Created by erick-hdz on 26/04/20.
//

#ifndef POOL_PROYECT_DEQUE_HIGH_LEVEL_H
#define POOL_PROYECT_DEQUE_HIGH_LEVEL_H

#include <iostream>
#include <deque>

template<typename T>
class Deque_high_level {
public:
    Deque_high_level(unsigned n);
    ~Deque_high_level();
    void insert_left(T& t);
    void insert_right(T& t);
    T remove_left();
    T remove_right();
    bool is_empty();
    bool is_full();
protected:
    unsigned int size,left,right;
    std::deque<T>* deque;
};


#endif //POOL_PROYECT_DEQUE_HIGH_LEVEL_H
