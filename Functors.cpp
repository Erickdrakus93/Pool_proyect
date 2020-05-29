//
// Created by erick-hdz on 18/04/20.
//
#include <string>
#include <utility>
#include <exception>
#include <vector>
#include <list>
#include <iostream>
template <typename T>
class Less_than{
    const T val;
public:
     explicit Less_than(const T& t):val(std::move(t)){
        throw std::exception{};
    };
    /**
     * This is the calling method as invoke
     * @param x
     * @return
     */
    bool operator()(const T& x)const{
        return x<val;
    }
};
    Less_than<int> int_example{45};
    Less_than<std::string> str_example{"Erick"};
/**
 * This is a manner as we can see of testing
 * @param n
 * @param s
 */
void test_less_than(int n, const std::string& s) {
    int_example.operator()(n);
    str_example.operator()(s);
}
//we can think this as a predicates:
/**
 * This is taking a reference as we can see
 * @tparam C
 * @tparam P
 * @param c
 * @param pred
 * @return
 */
template <typename C,typename P>
int count(const C& c, P pred){
    int count = 0;
    for (const auto& x:c){
        if (pred(x)){
            ++count;
        }
    }
    return count;
}
void sub(const std::vector<int>& numbers,const std::list<std::string>& words,int x, std::string str){
    std::cout << "number of values less than:\t" << x
    << count(numbers,Less_than<int>{x}) << "\n";

    std::cout << "number of values less than:\t"
    << count(words,Less_than<std::string>{str})
    <<"\n";
}

template <class C,class Operation>
void for_all(C& c,Operation& operation){
    for (auto& x:c) {
        operation(*x);//this is making an operation in the value pointers
    }
}