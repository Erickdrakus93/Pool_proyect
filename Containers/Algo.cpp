//
// Created by erick-hdz on 14/04/20.
//

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
using namespace std;


struct Entry{
    string name;
    int number;
};


bool operator<(const Entry& x, const Entry& y){
    return x.name < y.name;
};

void routine_as_an_example(const vector<Entry>& vec, const list<Entry>& list){
    sort(vec.begin(),vec.end());
    unique_copy(vec.begin(),vec.end(),list.begin());

};
/**
 *
 * @param vector1
 * @return list of Entry
 */
list<Entry> routine_as_an_example(const vector<Entry> vector1){
    list<Entry> res; //this is the mutable object as we can see in the last part
    sort(vector1.begin(),vector1.end());
    unique_copy(vector1.begin(),vector1.end(),res.begin());
    return res;
}

bool has_c(const string& s, char c){
    return find(s.begin(),s.end(),c) != s.end();
}

vector<string::iterator> find_all(string& str, char c){
    vector<string::iterator> res;
    for(auto p = str.begin();p!=str.end();++p){
        if (*p == c){
            res.push_back(p);
        }
    }
    return res; //res is a mutable as we can see
}

void test(){
    string s{"This is the constructor a we can see "};
    for(auto p:find_all(s,'a')){
        if (*p != 'a'){
            std::cerr << " a bug!\n";
        }
    }
}

// here we can define the general definition
/**
 * Here we can define the next mood in the next lines of the code
 * As we can see in the next lines of the code as we can see
 * @tparam T
 * @tparam C
 * @param t
 * @param c
 * @return
 */
template <typename T,typename C> //here the typename c is not a reference is a valor as we can see
vector<typename T::iterator> find_all_new(T& t, C c){
    vector<typename T::iterator> res;
    for(auto p = t.begin();p!=t.end();++p){
        if (*p == c){
            res.push_back(p);
        }
    }
    return res;
}

/**
 *
 * @tparam C
 * @tparam D
 * @param c is the call reference as we can see in the next lines of the code as we can see
 * @param d
 * @return
 */

template <typename T>
using iterator_n = typename T::iterator; //this is the manner to construct a iterator
template <typename C,typename D>
vector<iterator_n<C>> find_all_generic(C& c, D d){
    vector<iterator_n<C>> ret;
    for(auto p = c.begin(); p!=c.end();++p){
        if (*p == d){
            ret.push_back(p);
        }
    }
    return ret;
}

void test_new(){
    string m{"Mary had as we can see"};//this is the constructor as we can see in the next lines as we can see
    for (auto p:find_all_generic(m,'a')){
        if (*p != 'a'){
            std::cerr << "String bug!\n";
        }
    }
    list<double> id{1,2,2.2,555,5.555};
    for (auto p:find_all_generic(id,10.1)){ //this is a pointer as dereference manner as we can see
        if (*p!=10.1){
            std::cerr << "list bug!\n";
        }
    }
    list<string> vs{"red","blue","orange"};
    for(auto p:find_all_generic(vs,"green")){
        std::cerr << "list bug!\n";
    }
}

int main(){
    std::cout << "This is a test as we can see";
    test_new();
}