//
// Created by erick-hdz on 21/05/20.
//

#ifndef POOL_PROYECT_BUILDER_H
#define POOL_PROYECT_BUILDER_H
#include "stdio.h"
#include "string.h"
#include "iostream"
#include "Distro_Package.h"
/**
 * This is for the patter design of Builder
 * As we can see, in the next lines of the code
 */

//this is an abstract layer to extend in an implementation
class Builder {
public:
    virtual void configureFile(char*) = 0;
    virtual void configureQueue(char*)=0;
    virtual void configurePathway(char*)=0;
    //the next is to use like a setter method as we can see
    Distro_Package* get_result(){
        return _result;//here we can set as the main example
    }
//all the distropackage as the pointer in the next manner;
protected:
    Distro_Package* _result;


};


#endif //POOL_PROYECT_BUILDER_H
