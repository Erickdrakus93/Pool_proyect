//
// Created by erick-hdz on 23/04/20.
//

#ifndef POOL_PROYECT_LIST_ITER_H
#define POOL_PROYECT_LIST_ITER_H
#include "Iterator.h"
#include "Node_list.h"

template<typename T>
class List_iter: public Iterator<T> {
public:
    List_iter(List_iter<T>& ls):
    list(ls){
        list.reset();
    };
    void reset() override;
    List_iter<T>& operator=(T t) override ;
     bool operator!() override;
    T operator()() override;
    int operator++() override;
    void insert(T t);
    void pre_insert(T t);
    void remove();
protected:
    Node_list<T>* current;//this it will work as the iterator
    Node_list<T>* previous;
    List<T>& list;

};


#endif //POOL_PROYECT_LIST_ITER_H
