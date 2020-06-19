//
// Created by erick-hdz on 14/06/20.
//
#include <iostream>
#include <unordered_map>



using namespace std;
/**
 * Here we can see that the first lines is like
 * Lineal search as we can see
 * @tparam T
 * @param array
 * @param n
 */
template<typename T>
void select_sort(T* array,int n ){
    for (int i = 0; i <n-1 ; ++i) {
        int smallest = i;
        for (int j = i+1; j <n ; ++j) {
            if(array[smallest]<array[j]){
                smallest = j;
            }
        }
        //here we call the swap as the next manner as we can see
        std::swap(array[i],array[smallest]);
    }
}


void some_implementation_of_maps(){
    unordered_map<string,double> dow_price;
    for(const auto& element:dow_price){
        const string& symbol = element.first;
        std::cout << "The symbol is " << symbol << '\t'
                  << element.second << '\t'
                  << dow_price[symbol] << '\n';
    }
}


