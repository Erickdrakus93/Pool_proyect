//
// Created by erick-hdz on 19/04/20.
//
#include <iostream>
#include <memory>
#include <fstream>

using namespace std;

template <class X>
/*
 * Here we can define the next terms as we can see
 *
 */
void using_resource_memory(int i,int j) {
    X* p = new X;
    unique_ptr<X> sp{new X};
    if (i < 99) {
        throw std::out_of_range{"i is not in range"};
    } else if (j < 99) {
        return;
    }
    p->do_something();
    sp.get();
    delete p;
}

//here we have the next examples as we can see

void first_function(shared_ptr<fstream>);
void second_function(shared_ptr<fstream>);

void user(const string& name, ios_base::openmode mode){
    shared_ptr<fstream> fp{new fstream(name,mode)};
    if (!*fp){
        throw std::out_of_range{"std::noFile"};
    }
    first_function(fp);//Calling the manner
    second_function(fp);//close the fp as we can see
    //..here we can define the next part of the same object as we can see
}