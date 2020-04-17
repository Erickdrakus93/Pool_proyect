//
// Created by erick-hdz on 17/04/20.
//

#ifndef POOL_PROYECT_RESOURCE_ABSTRACT_H
#define POOL_PROYECT_RESOURCE_ABSTRACT_H

template <typename T>
class Resource_abstract {
    T* value = new T();//this is the pointer of the value as we can see
public:
    /**
     * Basic constructor as we can  see in the next lines of the code
     */
    Resource_abstract();
    /**
     *This is the manner as the reset in the next lines of the code as we can see
     * @return Null pointer;
     */
    void reset();
    /**
     *
     * @return T value as we can see
     */
    T& getValue();

    /**
     *
     * @param vl
     * @return void
     */
    void setValue(T vl);
};


#endif //POOL_PROYECT_RESOURCE_ABSTRACT_H
