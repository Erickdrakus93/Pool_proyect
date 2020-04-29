//
// Created by erick-hdz on 27/04/20.
//
#include "iostream"
#include "Control.h"
#include "memory"
int main() {
    std::cout << "Testing with shared is init" << std::endl;
    //this is an object with one pointer
    std::shared_ptr<Control> empty_as_we(nullptr);
    {
        std::shared_ptr<Control> control =
                std::make_shared<Control>();
        //now is two pointers
        empty_as_we = control;//this is the re-assigment as we can note
        control->Increment_to_Speed(45);
    };
    std::cout << "The test end" << std::endl;
    return 0;
};
//this is may with the resources as shared
int main_2() {
    std::cout << "The testing is started" << std::endl;
    std::shared_ptr<Control[]> empty(nullptr);
    {
        std::shared_ptr<Control[]> array_controls =
                std::make_shared<Control[]>();
        empty = array_controls;
        array_controls[4].Increment_to_Speed(45);
    }
    //this will be kill the scope of the main object
    std::cout << "Testing is end" << std::endl;
    return 0;
}