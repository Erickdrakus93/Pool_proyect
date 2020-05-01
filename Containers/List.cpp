//
// Created by erick-hdz on 22/04/20.
//

#include "List.h"
#include "stack"


template<typename T>
int List<T>::isEmpty() {
    return first == nullptr;
}
template<typename T>
void List<T>::insert(T t) {
    auto* p = newNode(t,first);
    first = p;//this is the copy operations as we can see
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
    t = first->data;
    Node_list<T>* q = first;
    first = first-> next;
    delete q;
    return 1;
}

template<typename T>
void List<T>::print() {
    for (auto* p = first;p;p=p->next) {
        std::cout << p->data << "->";
        std::cout << "*\n";//here we can put the * at the end
    }
}
//This is the classic constructor
//here we can put a cyclic list;
template<typename T>
List<T>::List():first(nullptr){}

//this is the manner
template<typename T>
void List<T>::reverse() {
    if (isEmpty()) {
        throw std::out_of_range{"The list is empty"};
    }
    for (auto* p = first; p;) {
        std::swap(p, p->next);
    }
}
/**
 * This is the iversion of the order in a way using the Stack
 * Structure as we can see
 * @tparam T
 */
template<typename T>
void List<T>::reverse_the_data() {
    std::stack<T> stack_of_data;
    for (auto *p = first; p; p = p->next) {
        stack_of_data.push(p->data);
    }
}

template<typename T>
void List<T>::merge(List<T> &another_list) {
    for (auto* p = first;p; p = p->next) {
        another_list.insert(p->data);
    }
}

template<typename T>
void List<T>::insert_last(T t) {
    Node_list<T>* temp;
    for (auto* p=first;p;p=p->next){
        if (p->next == nullptr){
            temp =  newNode(t, p);
            p = temp;//This is the update of the value as we can
        }
    }
}

template<typename T>
int  List<T>::remove_from_the_last(T& t) {
    //here we can declare the next part of the main example as we can see
    if (isEmpty()) {
        std::cout << "The list is empty";
        return 0;
    }
    Node_list<T>* res;
    for (auto *p = first; p;) {
        if (p->next == nullptr) {
            t = p->data;//This is the data that reference in the data
            res = p;
        }
    }
    //Here we can delete the last
    delete res;//This indicate the manner of the delete in the last
    return 1; //this is the flag for indicating the remove operation
}

template<typename T>
List<T>& List<T>::operator=(const List<T>& lst) {
    first = lst.first;
    Node_list<T>* q = first;
    Node_list<T>* r = lst.first;
    while (*q && *r){
        q->data = r->data;
        //here we can update in the next manner
        q->next && r->next;
    }
    return *this;//finally return the update
}

template<typename T>
void List<T>::append(List<T>& lst) {
    for (auto* p =lst.first;p;) {
        insert(p->data);
    }
}

template<typename T>
void List<T>::insert_last_with_re(T t) {
    Node_list<T>* q = first;
    Node_list<T>* r;
    while (q == nullptr){
        r = newNode(t, q);
        q = r;
        q = q->next;
    }
}
//here we have the types that have the next part of the main example

template<typename A,typename B>
bool has_the_element(A& container, B element){
     return std::find(container.begin(),container.end(),element)!= container.end();
}