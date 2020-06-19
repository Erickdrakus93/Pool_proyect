//
// Created by erick-hdz on 10/06/20.
//
#include "iostream"
#include "vector"
#include <algorithm>
#include <functional>
#include <map>
#include <fstream>
#include <set>
#include <istream>
#include <iterator>


int routine_istream_examples();
using namespace std;
//here is only the manner to adder as accumulate subroutine as we can see
template<typename  T>
void some_function(vector<T>& v1,vector<T>& v2){
    int largest = 0;
    if(v1.size()<v2.size()){
        largest = v2.size();
    }else{
        largest =v1.size();
    }
    for (int i = 0; i <largest ; ++i) {
        v1[i]+=v2[i];
    }
}
//Here we can add a sub inner product as we can see
//here the semantics is like the next part of the next example as we can see
template<typename T>
T Sub_inner_Product(vector<T>& v1,vector<T>& v2){
    T init = 0;
    for (int i = 0; i <v1.size() ; ++i) {
        init+=v1[i]*v2[i];
    }
    return init;
}

//here we can define the next lambda expression inner in the next fun
//this is only a reference of the main object as we can see
template<typename T>
void print_modulo(const vector<T>& vector,ostream& os,int m) {
    auto modulo_cmp = [&os, m](int x) {
        if (x%m==0){
            return os << x <<'\t';
        }
    };
    for_each(vector.begin(),vector.end(),modulo_cmp);

}

//some istream iterators as we can see
int routine_istream_examples(){
    string from,to;
    cin >> from >> to;

    ifstream is{from};
    ofstream os{to};

    //here we can declare the structure set as we can see
    set<string> b{
            istream_iterator<string>{is},
            istream_iterator<string>{}
    };//here we can see that is in order as we can see
    //here we can use the next part of the set as we can see
    //here we use the next part of unique_copy as  we can see
    unique_copy(begin(b),end(b),ostream_iterator<string>{os,"\n"});
    return 0;
}
//here we can declare the last but using the

int routine_as_the_examples(){
    string from,to;
    cin >> from >> to;

    ifstream is{from};
    ofstream out{to};

    istream_iterator<string> ii{is};
    istream_iterator<string> eos{};
    vector<string> vr{ii,eos};
    //here we can sort as we can see
    sort(begin(vr),end(vr));
    unique_copy(begin(vr),end(vr),ostream_iterator<string>{out, "\n"});
    return 0;
}


void some_func() {
    map<string, int> the_map;
    //here we can add as we can see
    auto pair = make_pair("here",5);
    the_map.insert(pair);
    auto pair_2 = make_pair("This is the string",5);
    the_map.insert(pair_2);
    for (auto& x:the_map){
        std::cout << x.first << ":" << x.second
                  << '\n' << the_map[x.first];
    }
}

double weight(const pair<string,double>& pr1,
        const pair<string,double>& pr2){
    return pr1.second * pr2.second;
}