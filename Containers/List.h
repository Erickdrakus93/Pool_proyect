//
// Created by erick-hdz on 22/04/20.
//

#ifndef POOL_PROYECT_LIST_H
#define POOL_PROYECT_LIST_H

#include <iostream>
#include "Node_list.h"
#include "List_iter.h"

template<typename T>
class List {
    friend List_iter<T>;
public:
    explicit List();
    ~List();
    void insert(T t);
    int remove(T& t);
    int isEmpty();
    void print();

protected:
    Node_list<T>* first;
    Node_list<T>* newNode(T& t,Node_list<T>* p){
        auto* q = new Node_list<T>(t,p);
        return q;
    }
};

#endif //POOL_PROYECT_LIST_H
