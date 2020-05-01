//
// Created by erick-hdz on 29/04/20.
//

#ifndef POOL_PROYECT_LISTITER_H
#define POOL_PROYECT_LISTITER_H

#include "iterator"
#include "List.h"

template<typename T>
class ListIter: public Iterator<T> {
public:
    explicit ListIter(List<T>&ls):list(ls){
        reset();
    };
    void reset() override;
    T operator()() override;
    ListIter<T>& operator=(T&t);
    bool operator!();
    int operator++();
    void insert(T t);
    void insert_in_front_of(T t);
    void remove();


protected:
    Node_list<T>* previous;
    Node_list<T>* current;
    List<T>& list;

};

#endif //POOL_PROYECT_LISTITER_H
