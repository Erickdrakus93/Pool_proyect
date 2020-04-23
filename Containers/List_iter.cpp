//
// Created by erick-hdz on 23/04/20.
//

#include "List_iter.h"
#include "Node_list.h"

template<typename T>
void List_iter<T>::reset() {
    previous = nullptr;
    current = list.current;
};

template<typename T>
T List_iter<T>::operator()() {
    return current->data;
}

template<typename T>
List_iter<T>& List_iter<T>::operator=(T t) {
    current->data = t;
}

template<typename T>
bool List_iter<T>::operator!() {
    if (current == nullptr){
        if (previous == nullptr){
            current = list.first;
        }else{
            current = previous->next;
        }
    }
    return current != nullptr;
}

template<typename  T>
int List_iter<T>::operator++() {
    if (current == nullptr){
        if (previous == nullptr){
            current = list.first;
        }else{
            current = previous->next;
        }
    }
    return current != nullptr;
}

template<typename T>
void List_iter<T>::insert(T t) {
    Node_list<T>* p = list.newNode(t, nullptr);
    if (list.isEmpty()){
        list.first = p;
    }else{
        p->next = current->next;
    }
}
template<typename T>
void List_iter<T>::pre_insert(T t) {
    Node_list<T>* p = list.newNode(t,current);
    if (current == list.first){
        list.first = previous = p;
    }else{
        previous->next = p;
    }
}

template<typename  T>
void List_iter<T>::remove() {
     if (list.isEmpty()){
         std::cout << "This is the main example";
     }else{
         if (current == list.first){
             list.first = current->next;
         } else{
             previous->next = current->next;
         }
         delete current;//this is the current of the main example as we can see
         current = nullptr;
     }
}
//this is the manner as we can see in the next manner as we can see