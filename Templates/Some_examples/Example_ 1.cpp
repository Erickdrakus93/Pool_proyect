//
// Created by erick-hdz on 19/05/20.
//

#include <iostream>

using namespace std;

class X{
public:
    virtual void f(){
        std::cout <<"Executing the X::f() function\n";
    }
};

class Y: public X{
public:
    void f(){
        std::cout << "Executing Y::f() function\n";
    }
};

int main(){
    X x;
    Y y;
    X* p = &x;
    p->f();//here is the same call as we can see
    p = &y;
    p->f();//second same call;


}