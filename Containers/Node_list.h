//
// Created by erick-hdz on 22/04/20.
//

#ifndef POOL_PROYECT_NODE_LIST_H
#define POOL_PROYECT_NODE_LIST_H
#include <istream>
#include "List.h"

template<typename  T>
class Node_list {
    friend List<T>;
public:
    /**
     * Constructor,and main constructor
     * @param t
     * @param list
     */
    explicit Node_list(T& t,Node_list<T>* list):data(t),next(list){};
    ~Node_list(){
        delete data;
    }

protected:
    T data;
    Node_list next;
};


#endif //POOL_PROYECT_NODE_LIST_H
