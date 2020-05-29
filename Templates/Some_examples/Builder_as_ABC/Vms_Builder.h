//
// Created by erick-hdz on 21/05/20.
//

#ifndef POOL_PROYECT_VMS_BUILDER_H
#define POOL_PROYECT_VMS_BUILDER_H

#include "iostream"
#include "string.h"
#include "stdio.h"
#include "Builder.h"
/**
 * This is the implementation of the builder as we can see
 */


class Vms_Builder: public Builder {
public:
    Vms_Builder(){
        _result = new Distro_Package{"Vms"};
    }
    //here we can implement in the next lines as we can see

    void configureFile(char* filename) override {
        _result->setFile("ISAM",filename);
    };
    void configureQueue(char* name) override {
        _result->setQueue("Priority",name);
    };
    void configurePathway(char* name) override {
        _result->setPathway("LWP",name);
    };
};


#endif //POOL_PROYECT_VMS_BUILDER_H
