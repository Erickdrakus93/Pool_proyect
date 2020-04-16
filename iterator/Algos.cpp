//
// Created by erick-hdz on 16/04/20.
//

#include <algorithm>
namespace Estandard{
    using namespace std;


    template <typename T>
    void sort_void(T& t){
        sort(t.begin(),t.end());
    }

    template <class C,class Predicate>
    void sort_manner(C& c, Predicate& predicate){
        sort(c.begin(),c.end(),predicate);
    }
}

