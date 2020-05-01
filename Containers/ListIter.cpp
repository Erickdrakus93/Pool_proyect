//
// Created by erick-hdz on 29/04/20.
//

#include "ListIter.h"
#include "List.h"

template<typename T>
void ListIter<T>::reset() {
     previous = nullptr;
     current = list.first;
}

template<typename T>
T ListIter<T>::operator()() {
    return current->data;
}

template<typename T>
bool ListIter<T>::operator!() {
    if (current == nullptr ){
         if (previous == nullptr)
             reset();
         else
             current = previous->next;
    }
    return current!= nullptr;
}

template<typename T>
ListIter<T>& ListIter<T>::operator=(T &t) {
    current->data = t;
}

template<typename T>
int ListIter<T>::operator++() {
     if (current == nullptr){
         if (previous == nullptr){
             reset();//this is the same of
            // current = list.first;
         } else{
             current = previous->next;//this is the assign trivial;
         }
     } else{
         previous = current;
         current = current->next;
     }
     return (current != nullptr);
}

template<typename T>
void ListIter<T>::remove() {
     if (current == list.first){
         list.first = current->next;
     } else{
         previous->next = current->next;
         delete current;
     }
}

template<typename T>
void ListIter<T>::insert(T t) {
    Node_list<T>* r = list.newNode(t, nullptr);
    if (list.isEmpty()){
        r = list.first;
    } else{
        r->next = current->next;
        current->next = r;
    }
}
template<typename T>
void ListIter<T>::insert_in_front_of(T t) {
    Node_list<T>* r = list.newNode(t, nullptr);
    if (list.isEmpty()){
        list.first = r;
    } else{
        if (current == list.first){
            list.first = r;
        } else{
            previous->next = r;
            r->next = current;
        }
    }
}
//here we can find an element
//if this have the element
/**
 * This is for bool assign as indecator of
 * Another decisions
 * @tparam T
 * @param ls
 * @param t
 * @return
 */
template<typename T>
bool find(ListIter<T>& ls, T t){
    for (auto* p:ls) {
        if (ls.data == t ){
            return true;
        }
    }
}

