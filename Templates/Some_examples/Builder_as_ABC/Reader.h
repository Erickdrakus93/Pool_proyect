//
// Created by erick-hdz on 21/05/20.
//

#ifndef POOL_PROYECT_READER_H
#define POOL_PROYECT_READER_H

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "Builder.h"



class Reader {
public:
    //here we can note init the next object as we can note
    // In the main test of the reader and the builder
    /**
     * A reference of Builder Object
     * @param build
     */
    void set_builder(Builder* build){
        _builder = build;
    };
    //this is the basic manner as we can see in the next lines of the code
    //as we can see, here we can see the next lines of the code
    void constructor(Persistent_Attribute[],int);

protected:
    Builder* _builder; //this is the builder in the next sessions

};


#endif //POOL_PROYECT_READER_H
