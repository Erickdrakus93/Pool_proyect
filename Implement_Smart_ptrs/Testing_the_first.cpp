//
// Created by erick-hdz on 27/04/20.
//
#include "memory"
#include "iostream"
#include "Control.h"
using namespace std;

int main(){
    cout << "Unique_ptr test started" << endl;
    unique_ptr<Control> control =
            make_unique<Control>();
    control->Increment_to_Speed(120);
    cout << "unique_ptr finished" << endl;
}

int main_1(){
    cout << "Unique_ptr test started" << endl;
    unique_ptr<Control []> array_of_controls =
            make_unique<Control []>(3);
    array_of_controls[1].Increment_to_Speed(45);
    std::cout << "Testing is end" << endl;
}