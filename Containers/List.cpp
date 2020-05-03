//
// Created by erick-hdz on 22/04/20.
//

#include "List.h"
#include "stack"


//the next is in particular a boolean procedure;
template<typename T>
int List<T>::isEmpty() {
    return first == nullptr;
};

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
    std::stack<Node_list<T>*> stack_of_pointers;
    for (Node_list<T>*p= first; p;p=p->next){
        stack_of_pointers.push(p);
    }
}


template<typename T>
void List<T>::reverse_with_while() {
    if(isEmpty()){
        throw std::out_of_range{"Is empty"};
    }
    std::stack<Node_list<T>*> stack_of_nodes;
    Node_list<T>* current = first;
    while (current){
        stack_of_nodes.push(current);
        current = current->next;
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
    for (Node_list<T> *p = first;p;p=p->next){
        if (p->next == nullptr) {
            temp = newNode(t,p);
            p->next = temp;
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
    for (Node_list<T>* p= first; p;p=p->next) {
        if (p->next== nullptr){
            t = p->data;
            res = p;
        }
    }
    //Here we can delete the last
    delete res;//This indicate the manner of the delete in the last
    return 1; //this is the flag for indicating the remove operation
}

template<typename T>
List<T>& List<T>::operator=(const List<T>& lst) {
    Node_list<T>* q = first;
    Node_list<T>* r = lst.first;
    while (q!= nullptr && r!= nullptr){
        q->data = r->data;
        q = q->next;
        r = r->next;
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
    if(isEmpty()){
        std::cout << "The list is empty";
    } else{
        Node_list<T>* current= first;
        Node_list<T>* res;
        current = (current->next == nullptr);
        while (current){
            res = newNode(t,current);
            current->next = res;
            current = (current->next == nullptr);
        }
    }
}

template<typename T>

 bool List<T>::has_next(Node_list<T>& r) {
    Node_list<T>* current = r;
    return current->next != nullptr;
}

template<typename T>
List<T>::List(T *array, int n):first(nullptr){
    for (int i = 0; i <n ; ++i) {
        insert(array[i]);
    }
}
//here we have the types that have the next part of the main example

template<typename A,typename B>
bool has_the_element(A& container, B element){
     return std::find(container.begin(),container.end(),element)!= container.end();
}
//the next subroutine is the next manner as we can see
template<typename T>
void reverse_the_list(List<T>& the_list){
    Node_list<T>* current= the_list.first;
     while (the_list.has_next(current)){
         the_list.first = current->next;
         current = current->next;
     }
}