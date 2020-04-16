//
// Created by erick-hdz on 09/04/20.
//

#include "ObjectPool.h"
#include <Resource.cpp>
#include <iostream>
#include <list>

using namespace std;

class ObjectPool{
    std::list<Resource*> resources;
    static ObjectPool* instance;
    ObjectPool(){};
public:
    /**
     * Static method for accessing main class instance
     * Part of the singleton design Patterns
     * @return Pool instance
     */
     static ObjectPool* getInstance(){
         if (instance == 0){
             instance = new ObjectPool();
         }
     }
     /**
      * Returns instance of Resource
      * New resource will be created if all resources
      * were used at the time of the request
      */
      Resource*  getResource(){
          if (resources.empty()){
              std::cout << "Creating new " << std::endl;
              return new Resource;
          } else{
              std::cout << "Reusing existence" << std::endl;
              Resource* resource = resources.front();
              resource.pop_front();
              return resource;
          }
      }
      void return_resource(Resource* object){
          object->reset();
          resources.push_back();
      }
};

int main(void){
    ObjectPool* pool = ObjectPool::getInstance();
    Resource one,two;
    /**
     *  Creating the Resources as we can see
     *
     */
     one = pool->getResource();
     one->setValue(10);
     std::cout << "one = " << one->getValue() << "[" << one << "]" << std::endl;

     two->setValue(20);
     std::cout << "two = " << two->getValue() << "[" << two << "]" << std::endl;

     pool->return_resource(one);
     pool->return_resource(two);

     /**
      * Here we can reuse the Resources as we can see in the next lines of the code
      */
      one = pool->getResource();
      std::cout << "one =" one->getValue() << "[" << one << "]" << std::endl;
      two = pool->getResource();
      std::cout << "two =" two->getValue() << "[" << two << "]" << std::endl;

    return 0;
}