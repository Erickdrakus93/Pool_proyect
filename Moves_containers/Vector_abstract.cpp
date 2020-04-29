//
// Created by erick-hdz on 21/04/20.
//

#include "Vector_abstract.h"
#include <iostream>
#include "algorithm"

using namespace std;
template<typename T>
Vector_abstract<T>::Vector_abstract(const Vector_abstract<T> &vector):
sz(vector.sz),data{new T[vector.sz]}{
    copy(vector);
}

template<typename T>
Vector_abstract<T>::Vector_abstract(unsigned int n):sz(n),data{new T[sz]}{
}

template<typename T>
Vector_abstract<T>& Vector_abstract<T>::operator=(const Vector_abstract<T>& vector) {
    T* p = new T[vector.sz];
    for (int i = 0; i <vector.sz; ++i) {
        p[i] = data[i];
    }
    delete[] data;
    data = p;
    sz = vector.sz;
    return *this;
}

template<typename T>
bool Vector_abstract<T>::operator==(const Vector_abstract<T>& vector) {
    auto* p = new T[vector.sz];
    for (int i = 0; i <vector.sz ; ++i) {
        if ( p[i]!=data[i]){
            return false;
        }
    }
    return true;
}

template<typename T>
unsigned Vector_abstract<T>::size() {
    return sz;
}

template<typename T>
T & Vector_abstract<T>::operator[](unsigned int i) {
    for (auto &x:data) {
        return x;
    }
}
/**
 * This is the abstract layer of the comprensive manner as we can see
 * @tparam T
 * @param vector
 */
template<typename T>
void Vector_abstract<T>::copy(const Vector_abstract<T>& vector) {
    unsigned mn_sz = (sz < vector.sz ? sz : vector.sz);
    for (int i = 0; i <mn_sz ; ++i) {
        data[i] = vector[i];
    }
}

template<typename T>
unsigned Vector_abstract<T>::resize(unsigned int n) {
    auto *new_data = new T[n];
    for (int i = 0; i <n ; ++i) {
        new_data[i] = data[i];
    }
    delete[] data;
    sz = n;
    data = new_data;
    return sz;
}
template<typename T>
unsigned Vector_abstract<T>::resize_1(unsigned int n, T t){
    T* new_data = new T[n];
    //This is the copy as we can see
    for (int i = 0; i <n ; ++i) {
        new_data[i] = t;
    }
    delete[] data;
    sz = n;
    data = new_data;
    return sz;
}
template<typename T>
void Vector_abstract<T>::copy_as_array(T* a) {
    //So the size is not the same for bicotomy
    if(sizeof(a)!=sz){
        throw std::out_of_range{"This is different arrays "};
    }
    for (int i = 0; i<sizeof(a) ; ++i) {
         data[i] = a[i];
    }
}
template<typename T>
Vector_abstract<T>::Vector_abstract(initializer_list<T> list):data{new T[list.size()]},sz{list.size()}{
    std::copy(list.begin(),list.end(),data);
}

template<typename T>
void Vector_abstract<T>::Push_back(T t) {
    //Updating the size and construct a new
    sz+=1;
    T* new_data = new T[sz];
    for (int i = 0; i <=sz ; ++i) {
         new_data[i] = data[i];
         data[sz] = new_data[sz];
         new_data[sz] = t;
    }
    delete[] data;
    data = new_data;
}

template<typename T>
T Vector_abstract<T>::max() {
    if (sz<0){
        throw  std::out_of_range{"The size is negative"};
    }
    T max = 0;
    for (int i = 0; i <sz ; ++i) {
        max = data[i];
        if (data[i] < data[i + 1]) {
            max = data[i+1];
        }
    }
    return max;
}

template<typename T>
T Vector_abstract<T>::min() {
    if (sz<0) {
        throw std::out_of_range{"The size is negative!"};
    }
    T min = 0;
    for (int i = 0; i <sz ; ++i) {
        if(data[i]<data[i+1]){
             min = move(data[i]);
        }
    }
    return min;
}
template<typename T>
void Vector_abstract<T>::find(T t) {
    T* found;
    for (int i = 0; i <sz ; ++i) {
        *found = (data[i] == t);
    }
}

//here we always have an ordered manner as we can see
template<typename T>
void Vector_abstract<T>::Search(T target) {
    unsigned left =0, right = sz-1;
    T* found;
    for (int i = 0; i <sz ; ++i) {
        unsigned location = (left+right)/2;
        *found = (data[location] == target);
        if(data[location]<target){
            left = location+1;
        } else{
            right=location-1;
        }
    }
}

template<typename T>
unsigned int Vector_abstract<T>::frequency(T x) {
    unsigned res =0;
    for (auto* p = data;p;p++) {
        if  (*p == x){
            ++res;
        }
    }
    return res;
}
//here we can set the next part of the main example as we can see
template<typename T>
int Vector_abstract<T>::find_by_the_index(T t) {
    int index=0;
    for (int i = 0; i <sz ; ++i){
        if (data[i] == t){
            index = i;
        }
    }
    return index;
}
