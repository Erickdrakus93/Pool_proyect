//
// Created by erick-hdz on 09/04/20.
//

#include "Stack.h"
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>


template <class T>
class Stack{
private:
    vector<T> elements;

public:
    /**
     * Here we can replicate the operations as we can see in the next lines.
     */
    void Push(T const&);
    void Pop();
    T top() const;

    bool empty() const {
        return elements.empty();
    }
};
template <class T>
void Stack::Push(T const& elem){
    elements.push_back(elem);
}

template <class T>
void Stack::Pop() {
    if (elements.empty){
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    elements.pop_back();
}

template <class T>
T Stack<T>::top() const {
    if (elements.empty){
        throw out_of_range("Stack<>::top(): empty stack");
    }
    return elements.back();

}