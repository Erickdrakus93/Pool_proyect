//
// Created by erick-hdz on 25/05/20.
//

#ifndef POOL_PROYECT_NEURON_H
#define POOL_PROYECT_NEURON_H

#include "iostream"
#include "vector"
#include "Some_neuron.cpp"

using namespace std;

class Neuron: public Some_neuron<Neuron>{
public:
    //----- Here we can use to public to connect to another as we can see  ----- //
    vector<Neuron*> in, out;
    unsigned int id{};//here we can use the next part of the main example;

    Neuron(){
        static int id = 1;
        this->id =++id;
    };
    /**
     * The next voice is to use in the next part of
     * The main Neuron Object as we can see
     * @param another_neuron
     */
     //Here we can override as the next manner
    void connect_to(Neuron& another_neuron){
        //here we can use the containers as we can see
        out.push_back(&another_neuron);
        in.push_back(this);

    };
    Neuron* begin(){
        return this;

    };
    Neuron* end(){
        return this+1;
    };
};


#endif //POOL_PROYECT_NEURON_H
