//
// Created by erick-hdz on 17/04/20.
//
#include "Resource.cpp"
#include "ObjectPool.cpp"

static ObjectPool* instance = nullptr; //this is the basic consructor as we can see

int main(){
    ObjectPool* pool = ObjectPool::getInstance();
    Resource* one;
    Resource* two;
    /* Resources will be created */
    one = pool->getResource();
    one ->setValue(55);
    std::cout << "one = " << one->getValue() << "[" << one << "]" << std::endl;
    two = pool->getResource();
    two->setValue(555);
    std::cout << "two = " << two->getValue() << "[" << two << "]" << std::endl;
    pool->ReturnResource(one);
    pool->ReturnResource(two);

    /*
     * Resources will be reused;
     * Notice that the value of both resources were back to zero
     */
    one = pool->getResource();
    std::cout << "one = " << one->getValue() << "[" << one << "]" << std::endl;
    two = pool->getResource();
    std::cout << "two = " << two->getValue() << "[" << two << "]" << std::endl;

    return 0;

}