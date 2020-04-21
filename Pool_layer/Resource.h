//
// Created by erick-hdz on 09/04/20.
//

#ifndef POOL_PROYECT_RESOURCE_H
#define POOL_PROYECT_RESOURCE_H

/**
 * This is a Singleton Class in the engineering manner as we can see
 */
class Resource {
    int value; //this can be created in a generic manner
public:
    Resource();
    void reset();
    int getValue() const;
    void setValue(int number);

};
#endif //POOL_PROYECT_RESOURCE_H
