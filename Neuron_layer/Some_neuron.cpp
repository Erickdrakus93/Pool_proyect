//
// Created by erick-hdz on 26/05/20.
//

#include "iostream"
#include "vector"
#include "Neuron.h"

template<typename self>
struct Some_neuron{
    template<typename T>
    void connect_to(T& another){
        for(Neuron& to:*static_cast<self*>(this)){
            for(Neuron& from:another){
                from.out.push_back(&to);
                to.in.push_back(&from);
            }
        }
    };
    //here we can define the next abstract methods
    //this is the method in the next part of the sessions
    virtual Neuron* begin() =0;
    //all the main example as the refer as the main example as we can
    //here we can set the next part of the
    virtual Neuron* end() = 0;

};