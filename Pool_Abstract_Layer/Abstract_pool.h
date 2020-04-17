//
// Created by erick-hdz on 17/04/20.
//

#ifndef POOL_PROYECT_ABSTRACT_POOL_H
#define POOL_PROYECT_ABSTRACT_POOL_H

#include "Resource_abstract.cpp"
#include <list>
#include <iostream>
#include <cstdlib>


template <typename T>
class Abstract_pool {
    std::list<Resource_abstract<T>*> resources;
    static Abstract_pool<T>* instance;
    Abstract_pool() = default;

public:
    /**
     * Static method for accessing class instance
     * Part of the singleton design
     *
     * @return Abstract_pool instance
     */
     static Abstract_pool<T>* getInstance();

     /**
      * Return instance of Resorce Abstract
      * New Resource will be created if all the resources
      * Were used at the time of request
      *
      * @return Resource Abstract instance
      */
      Resource_abstract<T>* getResource();

      /**
       * Return back the instance of the resource
       * As the comeback manner as we can see
       *
       */
      void ReturnResource(Resource_abstract<T>* resource);

};


#endif //POOL_PROYECT_ABSTRACT_POOL_H
