//
// Created by erick-hdz on 26/05/20.
//

#ifndef POOL_PROYECT_LAYER_NEURON_H
#define POOL_PROYECT_LAYER_NEURON_H

#include "iostream"
#include "vector"
#include "Neuron.h"

//this is the main example as we can see
class Layer_neuron:std::vector<Neuron> {
public:
    //here this until the value is zero value;
    explicit Layer_neuron(int count){
        while(count-->0){
            emplace_back(Neuron{});
        };
    };
};


#endif //POOL_PROYECT_LAYER_NEURON_H
