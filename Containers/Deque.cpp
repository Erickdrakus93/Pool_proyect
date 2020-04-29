//
// Created by erick-hdz on 26/04/20.
//

#include "Deque.h"

template<typename T>
Deque<T>::Deque(unsigned int n):size(n),left(0),right(0),data{new T[size]}{
}
template<typename T>
Deque<T>::~Deque<T>() {
     delete[] data;
}

template<typename T>
void Deque<T>::insertLeft(const T& t) {
    data[left++%size] = t;
}

template<typename T>
void Deque<T>::insertRight(const T &t) {
    data[right++%size] = t;
}

template<typename T>
bool Deque<T>::is_full() {
    return (left+1)%size == right;
}

template<typename T>
bool Deque<T>::is_empty() {
    return left==right;
}

template<typename T>
T Deque<T>::remove_left() {
    return data[left++%size];
}

template<typename T>
T Deque<T>::remove_right(){
    return data[right++%size];
}