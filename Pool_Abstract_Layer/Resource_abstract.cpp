//
// Created by erick-hdz on 17/04/20.
//
#include "Resource_abstract.h"
template <typename T>

Resource_abstract<T>::Resource_abstract() {
    value = nullptr;
}

template <typename T>
T& Resource_abstract<T>::getValue() {
    return value;
}

template <typename T>
void Resource_abstract<T>::reset() {
     value = nullptr;
}

template <typename T>
void Resource_abstract<T>::setValue(T vl) {
    value = vl;
}
