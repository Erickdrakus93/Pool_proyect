//
// Created by erick-hdz on 22/04/20.
//

#ifndef POOL_PROYECT_NODE_LIST_H
#define POOL_PROYECT_NODE_LIST_H
#include <istream>
#include "List.h"
#include "List_iter.h"
#include "ListIter.h"

template<typename  T>
class Node_list {
    friend ListIter<T>;
    friend  List<T>;
    friend List_iter<T>;
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
    Node_list* next;//this is the manner as we can see
};


#endif //POOL_PROYECT_NODE_LIST_H
