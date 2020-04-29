//
// Created by erick-hdz on 26/04/20.
//

#ifndef POOL_PROYECT_DEQUE_H
#define POOL_PROYECT_DEQUE_H
#include <iostream>

template<typename T>
class Deque {
public:
    explicit Deque(unsigned n);
    ~Deque();
    void insertLeft(const T&);
    void insertRight(const T& t);
    bool is_full();
    bool is_empty();
    T remove_left();
    T remove_right();
protected:
    unsigned int size,left,right;
    T* data;
};

#endif //POOL_PROYECT_DEQUE_H
