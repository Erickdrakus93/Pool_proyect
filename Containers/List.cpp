//
// Created by erick-hdz on 22/04/20.
//

#include "List.h"

template<typename T>
int List<T>::isEmpty() {
    return first == nullptr;
}
template<typename T>
void List<T>::insert(T t) {
    auto* p = new Node_list<T>(t,first);
    first = std::move(p);
}
//In the next part is the next

template<typename T>
List<T>::~List<T>() {
    Node_list<T>* temp;
    for(auto* p = first;p;) {
        temp = std::move(p);
        p = std::move(p->next);
        delete temp;
    }
}

template<typename T>
int List<T>::remove(T &t) {
    if (isEmpty()) {
        std::cout << "Is empty" << std::endl;
    }
    auto d = std::move(first->data);
    Node_list<T> *p = first;
    first = std::move(first->next);
    delete p;
    return 1;
}

template<typename T>
void List<T>::print() {
    for (auto* p = first;p;p=p->next) {
        std::cout << p->data << "->";
        std::cout << "*\n";
    }
}
//This is the classic constructor
template<typename T>
List<T>::List():first(nullptr){};
