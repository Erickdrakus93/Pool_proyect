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
    friend Node_list<T>;
    friend List_iter<T>;
public:
    explicit List();
    List(const List<T>& lst):first(lst.first){
        Node_list<T>* q = first;
        Node_list<T>* r = lst.first;
        while (*q && *r) {
            q->data = r->data;
            q = q->next && r=r->next;
        }
    };
    ~List();
    List<T>& operator=(const List<T>& lst);//this is the copy operator
    /**
     * The next is the layer of operations:
     * As data Structure;
     * @param t
     */
    void insert_last(T t);
    int remove_from_the_last(T& t);
    void insert(T t);
    int remove(T& t);
    int isEmpty();
    void print();
    void reverse();
    void reverse_the_data();
    void merge(List<T>& another_list);
    void append(List<T>&);
protected:
    Node_list<T>* first;//this is the first manner as we can see
    Node_list<T>* newNode(T& t,Node_list<T>* p){
        auto* q = new Node_list<T>(t,p);
        return q;
    }
};

#endif //POOL_PROYECT_LIST_H
