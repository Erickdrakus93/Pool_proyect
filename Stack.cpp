//
// Created by erick-hdz on 09/04/20.
//
#include "Stack.h"
#include <iostream>

using namespace std;

template<typename T>
T Stack<T>::pop() {
    return data[top--];
}

template<typename T>
void Stack<T>::push(const T &t) {
    data[++top] = t;
}
template<typename T>
bool Stack<T>::is_empty() {
    return top == -1;
}
template<typename T>
bool Stack<T>::is_full() {
    return top == size - 1;
}

