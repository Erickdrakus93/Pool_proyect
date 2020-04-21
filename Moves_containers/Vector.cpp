//
// Created by erick-hdz on 17/04/20.
//
#include <iostream>
#include "Vector.h"
#include <vector>
#include <thread>
Vector::Vector(const Vector &a): elemnts{new double[a.size]}, size{a.size} {
    for (int i = 0; i <a.size ; ++i) {
        elemnts[i] = a.elemnts[i];

    }
}
Vector& Vector::operator=(const Vector &a) {
    auto* p = new double[a.size];
    //the next is the manner as we can see
    for (int j = 0; j < a.size; ++j) {
        p[j] = elemnts[j];
    }
    delete[] elemnts;
    elemnts = p;
    size = a.size;
    return *this;
}

Vector::Vector(int s):elemnts{new double[s]}, size(s) {};
const double& Vector::operator[](int i) const {
    if (i<0 || size<i){
        throw std::out_of_range{"Vector::operator[]"};
    }
    return elemnts[i];
}
/**
 * Simple access method as we can see
 * @return int
 */
int Vector::get_size() const {
    return size;
}
/**
 * This is a friend operator as to eat two references
 * And we have the resources as we can see
 * @param a
 * @param b
 * @return Vector object
 */
Vector operator+(const Vector& a, const Vector& b){
    //here we can suppose that is  of the same length
    Vector res(a.get_size());
    for (int i = 0; i <a.get_size() ; ++i){
        res[i]=a[i]+ b[i];
    }
    return res;
}
/**
 * This is the manner as we can see in the next lines of the code as we can see
 * @param i
 * @return
 */
double &Vector::operator[](int i) {
    return elemnts[i];
}
Vector &Vector::operator*(double a) {
    for (int i = 0; i <size ; ++i) {
        elemnts[i]*=a;
    }
    return *this;
}
/**
 * This is the reference constructor
 * @param rvalue Vector
 * @return Constructor as we can see
 */
Vector::Vector(Vector&& a) noexcept :elemnts(a.elemnts),size(a.get_size()) {
    a.elemnts = nullptr;
    a.size = 0;
}
/**
 * This is the rvalue as we can see in the next lines as we
 * Can see && indicates that is a rvalue as we can see
 * @param vector
 * @return
 */
Vector& Vector::operator=(Vector&& vector) noexcept {
    vector.elemnts = nullptr;
    vector.size = 0; //this is the manner as we can see
    return *this;
}


Vector some_another_function(){
    Vector x(655);
    Vector y(5555);
    Vector z(6552555);
    //

    z = x;
    y = std::move(x);
    //
    return z;
}
//this is the container of the resources as we can see
std::vector<std::thread> my_threads;

Vector init(int n){
    std::thread t{};
    my_threads.push_back(t);
    Vector vector(n);
    for (int i = 0; i <vector.get_size() ; ++i) {
        vector[i] = 545;
    }
    return vector;
}

bool operator==(const Vector& vector1,const Vector& vector2){
    if (vector1.get_size()!=vector2.get_size()){
        throw std::out_of_range{"Vector of different range"};
    }
    for (int i = 0; i <vector1.get_size() ; ++i) {
        if (vector1[i]!=vector2[i]){
            return false;
        }
    }
    return true;
}
bool Vector::operator==(Vector& vector) {
    if (size!=vector.get_size()){
        throw std::out_of_range{"Out of the range of the vector"};
    }
    for (int i = 0; i <size ; ++i) {
        if (elemnts[i] != vector.elemnts[i]){
            return false;
        }
    }
    return true;
}
