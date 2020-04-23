//
// Created by erick-hdz on 16/04/20.
//

#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <vector>


class My_iterator: public std::iterator<std::input_iterator_tag,int>{
    int* p; //this is the manner as we can see in the next
public:
    explicit My_iterator(int* x): p(x){};
    My_iterator(const My_iterator& mit):p(mit.p){};
    My_iterator& operator++(){
        ++p;
        return *this;
    }

    My_iterator operator++(int){
        My_iterator tmp(*this);
        operator++();
        return tmp;
    }
    bool operator==(const My_iterator& rhs) const{
        return p==rhs.p;
    }
    bool operator !=(const My_iterator& rhs) const{
        return p!=rhs.p;
    }
    int&operator*(){
        return *p;
    }
};
//here is more easy in the next wa

int main(){
    int numbers[] = {10,20,30,40};
    My_iterator from(numbers); //this is the type of the end as we can see
    My_iterator until(numbers+5);
    for(auto it = from; it!= until; it++){
        std::cout << *it << ' ';
    }
    std::cout << '\n';
    return 0;
}