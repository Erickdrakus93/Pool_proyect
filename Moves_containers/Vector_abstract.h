//
// Created by erick-hdz on 21/04/20.
//

#ifndef POOL_PROYECT_VECTOR_ABSTRACT_H
#define POOL_PROYECT_VECTOR_ABSTRACT_H
#include <iostream>
#include <cstdlib>
template<typename T>
class Vector_abstract {
public:
    /**
     * The next is the Constructors
     * @param n
     */
    explicit Vector_abstract(unsigned n=8);
    Vector_abstract(const Vector_abstract<T> &vector);
        ~Vector_abstract() {
        delete[] data;
    }
    /**
     * The next init as a list from the STL
     */
    Vector_abstract(std::initializer_list<T>);
    /**
     * Constructors and member functions as we can see
     */
    Vector_abstract<T> &operator=(const Vector_abstract<T> &vector);
    T &operator[](unsigned i);
    explicit Vector_abstract(T* a):sz{sizeof(a)},data{new T[sz]}{
        copy_as_array(a);
    };
    unsigned size();
    unsigned resize(unsigned n);
    unsigned resize_1(unsigned n,T t);
    bool operator==(const Vector_abstract<T>& vector);
    void Push_back(T t);
    void find(T t);
    void Search(T target);
    /**
     * @param t
     * @return index of the value,as we can see
     */
    int find_by_the_index(T t);
    /**
     * The next are simple Statistics as we can see;
     * @return
     */
    T max();
    T min();
    unsigned frequency(T x);
protected:
    T* data;
    unsigned sz;//this is the unsigned manner as we can see
    void copy(const Vector_abstract<T>&);
    void copy_as_array(T* a);
};


#endif //POOL_PROYECT_VECTOR_ABSTRACT_H
