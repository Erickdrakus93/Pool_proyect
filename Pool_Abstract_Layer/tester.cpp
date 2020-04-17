//
// Created by erick-hdz on 17/04/20.
//
#include "Abstract_pool.cpp"
#include "Resource_abstract.cpp"
static Abstract_pool<int>* instance = nullptr;
int main(){
    Abstract_pool<int>* pool = Abstract_pool<int>::getInstance();
    Resource_abstract<int>* one;
    Resource_abstract<int>* two;
    /*Resources will be created */
    one = pool->getResource();//this is the init as we can see in the last lines of the code
    one->setValue(45);
    std::cout << "one = " << one->getValue() << "[" << one << "]" << std::endl;
    two = pool->getResource();
    two->setValue(5585);
    std::cout << "two = " << two->getValue() << "[" << two << "]" << std::endl;
    pool->ReturnResource(one);
    pool->ReturnResource(two);

    /* here we reuse them as we can see */
    one = pool->getResource();
    std::cout << "one =" << one->getValue() << "[" << one << "]" << std::endl;
    two = pool->getResource();
    std::cout << "two = " << two->getValue() << "[" << two << "]" << std::endl;

    pool->ReturnResource(one);
    pool->ReturnResource(two);
    return 0;
}
