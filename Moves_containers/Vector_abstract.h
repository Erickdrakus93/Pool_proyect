//
// Created by erick-hdz on 21/04/20.
//

#ifndef POOL_PROYECT_VECTOR_ABSTRACT_H
#define POOL_PROYECT_VECTOR_ABSTRACT_H

template<typename T>
class Vector_abstract {
public:
    /**
     * The next is the Constructors
     * @param n
     */
    explicit Vector_abstract(unsigned n = 8);
    Vector_abstract(const Vector_abstract<T> &vector);
    ~Vector_abstract(){
        delete[] data;
    }
    /**
     * This is the operators
     */
    Vector_abstract<T> &operator=(const Vector_abstract<T> &vector);
    T &operator[](unsigned i);
    unsigned size();
    bool operator==(const Vector_abstract<T>& vector);
protected:
    T* data;
    unsigned sz{};//this is the unsigned manner as we can see
    void copy(const Vector_abstract<T>&);
};


#endif //POOL_PROYECT_VECTOR_ABSTRACT_H
