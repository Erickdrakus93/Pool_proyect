//
// Created by erick-hdz on 25/04/20.
//
#include <iostream>

using namespace std;

template<typename iterator,typename Data>
Data sum_concentrator(iterator begin,iterator end){
    Data res;
    while(begin!=end){
        res+=*begin;
        ++begin;
    }
    return res;
}

int test(){
    double ls[]{1,2,3,4};


}



