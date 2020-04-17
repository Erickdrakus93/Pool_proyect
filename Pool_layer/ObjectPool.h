//
// Created by erick-hdz on 09/04/20.
//

#ifndef POOL_PROYECT_OBJECTPOOL_H
#define POOL_PROYECT_OBJECTPOOL_H

#include "Resource.h"
#include <list>

class ObjectPool {
private:
    std::list<Resource*> resources;
    static ObjectPool* instance;
    ObjectPool()= default;

public:
    /**
     * Static method for accessing class instance
     * Part of singleton design pattern
     *
     * @return ObjectPool instance
     */
     static ObjectPool* getInstance();

     /**
      * Return instance of Resource.
      * New resource will be created if all the resources
      * were used at the time of the request
      *
      * @return Resource instance
      */
      Resource* getResource();

      /**
       * Return resource back to the pool.
       *
       * The resource must me initialized back to
       * the default settings before someone else
       * attempts to use it.
       *
       * @param Object Resource instance
       * @return void
       */
       static void ReturnResource(Resource* resource);
};


#endif //POOL_PROYECT_OBJECTPOOL_H
