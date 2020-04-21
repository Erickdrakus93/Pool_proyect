//
// Created by erick-hdz on 20/04/20.
//
#include <iostream>
#include <thread>
#include <future>
#include <limits>
#include <string>
#include <iterator>
#include <vector>
#include <type_traits>
#include <algorithm>
#include <mutex>
#include <utility>
#include <cmath>

//here we can define the next sense of futures as we can see
/**
 * This is for the concurrent manner as we can see
 * @tparam X
 * @param future
 */
template <class X>
void funct_1(std::future<X>& future){
    try {
        X x = future.get(); //this is the getter method as we can see
    }
    catch (const char* args){
        std::cerr << args << std::endl;
    }
}
template <class X>
void funct_2(std::promise<X> promise){
    try {
        X res;
        promise.set_value(res);
    }
    catch (...) {
        //pass the exception to the future
        promise.set_exception(std::current_exception());
    }
}

template <typename For>
void sort_helper(For beg,For end,std::forward_iterator_tag){
    std::vector<decltype(*beg)>vector{beg,end};
    std::sort(vector.begin(),vector.end,beg);
}
/*
 *
 * This is the T::iterator using layer
 */
template <typename C>
using Iterator_type = typename C::iterator;
//this is the using a consider constructor as we can see
/**
 * This give the type of the iterator;
 */
template <typename iterator>
using Iterator_Category = typename std::iterator_traits<iterator>::iterator_category;


template <typename X>
void sort(X& x) {
    using iterator = Iterator_type<X>;
    sort_helper(x.begin(), x.end(),Iterator_Category<iterator>{});
}

template<typename T>
constexpr bool is_arithmetic(){
    return std::is_arithmetic<T>::value;
}

void func_3(std::vector<std::string>& v){
    auto pp = std::make_pair(v.begin(),2);

}

template<class A,class B>
class Map{
public:
        B& operator[](const A& a);
        std::pair<A,B>* begin();
        std::pair<A,B>* end();

private:
        /**
         * This is the structure of the control manner as we can see
         */
        std::vector<std::pair<A,B>> element;
    };

template<class A,class B>
std::pair<A, B>* Map<A,B>::begin() {
    return &element[0];
}

template<class A,class B>
std::pair<A, B> * Map<A,B>::end() {
    return &element[0]+element.size();
}

template<class A,class B>
B& Map<A,B>::operator[](const A& a) {
    for (auto& x:element){
        if (a==x.first){
            return x.second;
        }
    }
    element.push_back(a,B{});
    return element.back().second;
}