//
// Created by erick-hdz on 14/04/20.
//
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <fstream>
#include <iterator>
#include <set>
#include <thread>
#include <mutex>
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
list<Entry> routine_as_an_example(vector<Entry>& vector1){
    list<Entry> res; //this is the mutable object as we can see in the last part
    sort(vector1.begin(),vector1.end());
    unique_copy(vector1.begin(),vector1.end(),back_inserter(res));
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
 * @tparam D is a value as we can see in the next lines
 * @param c is the call reference as we can see in the next lines of the code as we can see
 * @param d
 * @return
 */

template <typename T>
using iterator_n = typename T::iterator; //this is the manner to construct a iterator as a generic manner
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
    vector<int> ls{10,20,30,40,50};
    for(auto p:find_all_generic(ls,50)){
        if (*p != 50){
            std::cerr << "vector bug!\n";
        }
    }
}
//this is the abstract layer as we can see
void print_element(){
    vector<int> vector{10,20,30,40,50};
    for (auto p =vector.begin();p!=vector.end();++p) {
        std::cout << *p << ',';
        ++p;
    }
    std::cout << '\n';
}

ostream_iterator<string> oo{cout};
int main_fin(){
    **oo = "hello,";
    ++oo;
    *oo = "World\n";
    return 0;
};

int main_test_istream(){
    string from, to;
    cin >> from >> to;

    // input objects as we can see
    ifstream in{from}; // this is can atach a file as we can see
    istream_iterator<string> ii{in};
    istream_iterator<string> sentinel{};

    //Output objects and iterators as out
    ofstream out{to};
    ostream_iterator<string> oo{out, "\n"};

    vector<string> vector{ii,sentinel};
    sort(vector.begin(),vector.end());

    //Copy as we can see
    unique_copy(vector.begin(),vector.end(),oo);//this is the method of the write
    return !in.eof() || !out;

}

int main_test_io() {
    string from, to;
    cin >> from >> to;

    ifstream in{from};
    ofstream out{to};
    //the next methods as we can see in the next lines of the code as we can see
    set<string> b{istream_iterator<string>{in}, istream_iterator<string>{}};
    copy(b.begin(), b.end(), ostream_iterator<string>{out});
    return !in.eof() || !out;
}


// here we can define the next counter in the next sense;

int count_num(char* p, char x){
    // count the number of ocurrences of x in p;
    // p is assumed to point to a zero-terminated array of char
    if (p == nullptr){
        return 0;
    }
    int count =0;
    for(;*p!=0;++p){
        if (*p == x)
            count+=count;
        }
    return count;
}
//this is a simple structure as we can see
struct vector_nw{
    int size;
    double* elements;
};

void vector_init(vector_nw& vector,int s){
    vector.elements = new double[s];
    vector.size = s;

}
//this is the commit as we can see in the next lines of the code as we can see
void BubbleSort(double* array[],int n){
    double* temp;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n-1 ; ++j) {
            if (*array[j]>*array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }

        }

    }
}

mutex m;
/**
 * This is an example of manage the resources as we can see
 */
void new_func(){
    unique_lock<mutex> lock{m,defer_lock};
    //this is to manipulate the data as we can see in the next lines of the code
}

template<typename T>
void swap(T& t1, T& t2){
    T temp = t1;
    t1 = t2;
    t2 = temp;
}

template<typename T>
void print(T& t){
    for(const auto& x:t){
        cout << "" << x;
    }
    cout << endl;

}