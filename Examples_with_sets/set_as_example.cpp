//
// Created by erick-hdz on 31/05/20.
//
#include "iostream"
#include "ios"
#include "set"

using namespace std;
//here we can declare after calls of the rest of the functions of structures
struct Fruit;
struct Fruit_Order;
int main();

/**
 * This is a class to construct a set of them
 */
struct Fruit{
    //here we can  define the next operator as we can see
    friend ostream& operator<<(ostream& os,const Fruit& fruit);
    //here we write the next part of the members
    ostream& operator<<(ostream& os) const{
        return os << "This is the name"
                  << name
                  <<"This is the count"
                  << count
                  << "This is the price by unit"
                  << unit_price;
    }

    string name;
    int count;
    double unit_price;

};

/**
 * This is the friend operator to our main class of this document
 * @param os
 * @param fruit
 * @return os class as instance and init
 */

ostream &operator<<(ostream &os,const Fruit& fruit) {
    return os <<fruit.name << "This is the name"
              << fruit.count << "This is the price"
              << fruit.unit_price << "This is the unit price";

}


struct Fruit_Order{
    bool operator()(const Fruit& a,const Fruit& b){
        return a.name <b.name;
    }
};


int main(){
    //here we can construct a set as the next
    set<Fruit, Fruit_Order> the_order;
    for(auto x =the_order.begin();x!=the_order.end();++x){
        std::cout << *x <<"\n";
    }
    for(auto& x: the_order){
        std::cout << x << '\t';
    };//here we have the last as logical equivalent
}