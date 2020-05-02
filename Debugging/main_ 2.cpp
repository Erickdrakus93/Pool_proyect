//
// Created by erick-hdz on 01/05/20.
//

#include "iostream"
#include "list"

int main(){
    int a[] ={1,2,33,44};
    int b[] ={22,33,44,55};
    std::list<int>ls_1(a,a+4);
    std::list<int>ls_2(b,b+4);
    ls_1.merge(ls_2);
    for(auto& it : ls_1){
        std::cout << it << ":" ;
        std::cout << std::endl;
    }
}
