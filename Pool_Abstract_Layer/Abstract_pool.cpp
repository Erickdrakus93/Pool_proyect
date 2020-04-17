//
// Created by erick-hdz on 17/04/20.
//

#include "Abstract_pool.h"
template <typename T>
Abstract_pool<T>* Abstract_pool<T>::getInstance() {
    if (instance == nullptr){
        instance = new Abstract_pool();
    }
    return instance;

}
template <typename T>
Resource_abstract<T>* Abstract_pool<T>::getResource() {
    if (resources.empty()){
        std::cout << "Creating a new Resource" << std::endl;
        return new Resource_abstract<T>;
    }else{
        std::cout << "Reusing Existing " << std::endl;
        Resource_abstract<T>* resource = resources.front();
        resources.pop_front();
        return resource;
    }
}
template <typename T>
void Abstract_pool<T>::ReturnResource(Resource_abstract<T>* resource) {
    resource->reset();
}