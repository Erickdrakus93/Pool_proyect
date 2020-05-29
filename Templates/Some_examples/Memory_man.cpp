//
// Created by erick-hdz on 19/05/20.
//
#include <memory>

#include "iostream"
#include "memory"

using namespace std;
class Foo{
public:
    explicit Foo(int n){};
    Foo(const Foo& foo){
        std::cout << "Copy Constructor!";
    }
};

Foo* create_foo(int n){
    return new Foo{n};
}
Foo create_nah(int n){
    return Foo(n);
}

unique_ptr<Foo> create_foo_smrt(int n){
    return make_unique<Foo>(n);
}

