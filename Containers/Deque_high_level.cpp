//
// Created by erick-hdz on 26/04/20.
//

#include "Deque_high_level.h"
#include <vector>
#include <iostream>

template<typename T>
Deque_high_level<T>::Deque_high_level(unsigned int n):size(n),left(0),right(0),deque{new std::deque<T>}{
};

template<typename T>
Deque_high_level<T>::~Deque_high_level<T>() {
    delete deque;
}

template<typename T>
void Deque_high_level<T>::insert_left(T &t) {
    deque->push_front(t);
}
template<typename T>
void Deque_high_level<T>::insert_right(T &t) {
    deque->push_back(t);
}
template<typename T>
T Deque_high_level<T>::remove_right() {
    return deque->pop_back();
}
template<typename T>
T Deque_high_level<T>::remove_left() {
    return deque->pop_front();
}

template<typename T>
bool Deque_high_level<T>::is_empty() {
    return deque->empty();
}

template<typename T>
bool Deque_high_level<T>::is_full(){
    return (deque->back()+1)%size ==deque->front();
}