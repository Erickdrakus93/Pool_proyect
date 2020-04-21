//
// Created by erick-hdz on 21/04/20.
//

#ifndef POOL_PROYECT_PROXIES_H
#define POOL_PROYECT_PROXIES_H

#endif //POOL_PROYECT_PROXIES_H

#include <iostream>
using namespace std;

template<typename T>
class Proxy{
    T& t;//this is the manner of the reference as we can see
public:
    explicit Proxy(T& mm):t(mm){};
    //
};

template<typename T>
class Handle {
    T* m;
public:
    explicit Handle(T* mm):m(mm){};
    T* rebind(T* mm);

};

template<typename T>
T *Handle<T>::rebind(T *mm) {
    return m = mm;
}
