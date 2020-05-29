//
// Created by erick-hdz on 21/05/20.
//

#ifndef POOL_PROYECT_UNIXBUILDER_H
#define POOL_PROYECT_UNIXBUILDER_H
#include "iostream"
#include "stdio.h"
#include "string.h"
#include "Builder.h"
/**
 * This is an implementation of the next builder
 */

class UnixBuilder: public Builder {
public:
    UnixBuilder(){
        _result = new Distro_Package("Unix");
    }
    void configureFile(char* name)override{
        _result->setFile("FlatFile",name);
    }
    void configureQueue(char* name)override {
        _result->setQueue("FIFO",name);
    }
    void configurePathway(char* name) override {
        _result->setPathway("Thread",name);
    };
    //here we can set the next part of the main example as we can see
};


#endif //POOL_PROYECT_UNIXBUILDER_H
