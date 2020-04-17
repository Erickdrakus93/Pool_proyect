//
// Created by erick-hdz on 09/04/20.
//

#include "ObjectPool.h"
#include "Resource.h"
#include <iostream>
#include <list>

ObjectPool* ObjectPool::getInstance() {
    if (instance == nullptr){
        instance = new ObjectPool();
    }
    return instance;
}
Resource* ObjectPool::getResource() {
    if (resources.empty()){
        std::cout << "Creating new Resource:" << std::endl;
        return new Resource;
    } else {
        std::cout << "Reusing Existing" << std::endl;
        Resource* resource = resources.front();
        resources.pop_front();
        return resource;
    }
}

void ObjectPool::ReturnResource(Resource* resource) {
    resource -> reset();
}



