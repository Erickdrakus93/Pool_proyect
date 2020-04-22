//
// Created by erick-hdz on 21/04/20.
//

#include "Vector_abstract.h"
#include <iostream>

using namespace std;
template<typename T>
Vector_abstract<T>::Vector_abstract(const Vector_abstract<T> &vector):
sz(vector.sz),data{new T[vector.sz]}{}

template<typename T>
Vector_abstract<T>::Vector_abstract(unsigned int n):sz(n),data{new T[sz]}{}

template<typename T>
Vector_abstract<T> & Vector_abstract<T>::operator=(const Vector_abstract<T> &vector) {
    for (auto& x:vector.data) {
        for (auto& y:data) {
            y = x;
        }
    }
}

template<typename T>
bool Vector_abstract<T>::operator==(const Vector_abstract<T>& vector) {
    auto* p = new T[vector.sz];
    for (int i = 0; i <vector.sz ; ++i) {
        if ( p[i]!=data[i]){
            return false;
        }
    }
    return true;
}

template<typename T>
unsigned Vector_abstract<T>::size() {
    return sz;
}

template<typename T>
T & Vector_abstract<T>::operator[](unsigned int i) {
    for (auto &x:data) {
        return x;
    }
}
/**
 * This is the abstract layer of the comprensive manner as we can see
 * @tparam T
 * @param vector
 */
template<typename T>
void Vector_abstract<T>::copy(const Vector_abstract<T>& vector) {
    unsigned mn_sz = (sz < vector.sz ? sz : vector.sz);
    for (auto& x:vector.data) {
        for (auto& y:data) {
             y = x;
        }
    }
}