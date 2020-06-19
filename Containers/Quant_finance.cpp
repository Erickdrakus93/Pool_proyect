//
// Created by erick-hdz on 06/06/20.
//
#include "iostream"
#include <unordered_map>
#include "map"


using namespace std;
//here we can declare the next
//here we can use the next info as the quantitative trivial does.
int main(){
    unordered_map<string,double> dow_jones;
    for(const auto& x:dow_jones){
        const string& symbol =x.first;
        std::cout << "symbol is" << symbol << '\t'
                  <<  "the price is" << x.second
                  << dow_jones[symbol] <<'\n';
    };

};
//here what is the semantics of the next structure of data

int another_main(){
    map<string,double> dow_jones;
    for(const auto& x:dow_jones){
        const string& symbol = x.first;
        std::cout << "The symbol is "
                  << symbol << '\t'
                  << "The price is "
                  << x.second << '\n';
    }
    return 0;
}//this is the manner as we can see of the order as the heapsort