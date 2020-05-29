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
#include <ios>

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

template<typename T>
void BubbleSort_t(T* t, int len){
    for (int i = 0; i <len ; ++i) {
        for (int j = 0; j <len-1 ; ++j) {
            if(t[j+1]>t[j]){
                swap(t[j+1],t[j]);
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
void Swap(T& t1, T& t2){
    T temp = move(t1);
    t1 = move(t2);
    t2 = move(temp);
}

template<typename T>
void print(T& t){
    for(const auto& x:t){
        cout << "" << x;
    }
    cout << endl;

}
/**
 * All the attributes is the low level of memory resources
 * @tparam C
 * @param a
 * @param b
 */
template<class C>
void swap_compiler_time(C& a,C& b){
    C temp{static_cast<C&&>(a)};//this is the calling the references as we can see
    a = static_cast<C&&>(b);
    b = static_cast<C&&>(temp);
}
/**
 * Here we can see in the next manner as wr
 * @tparam A
 * @param a
 * @param b
 */
template<typename A>
void swap_manner_as(A& a, A& b) {
    A temp{move(a)}; //this is the manner of the constructor
    b = move(b);
    b = move(temp);
}
//this is the manner of the rvalue as we can see
std::string h(string&& r){
    if (!r.empty()){//the other way is to write r.size()
        r[0] = std::toupper(r[0]);
    }
    return r;
}
// here we can declar in the next manner as we can see
// the constant is the main part of the examples as we can see

void i_h(int* p){
    while (*p){
        cout << ++*p;
    }
}
//here we can change the object in a dynamic way

int i_h_k(int& p){
    int* k = &p;
    while (*k){
        cout << ++*k;
    }
    return p;
}

//here we can write a search generic algorithm

template<typename A,typename B>
bool find_all(A& a, B b){
    auto p = find(a.begin(),a.end(),b);
    if (p != a.end()){
        return true;
    } else{
        return false;
    }
}
/**
 * This is a compact manner as we can see in the next part of the main
 * Example
 * @tparam A
 * @tparam B
 * @param a
 * @param b
 * @return
 */
template<typename A,typename B>
bool find_element(A& a, B b){
    return find(a.begin(),a.end(),b) != b.end();
}
// here we can declare a binary search as we can see
// this is the manner as we can see in the next lines of the code as we can see

template<typename T>
int search(T* a,T key,int first,int last){
    while (first<=last){
        int middle = (first+last)/2;
        if (key < a[middle]){
            last = middle -1;
        } else if(key>a[middle]){
            first = middle+1;
        } else{
            return middle;
        }
    }
    return -1; //not found
}
//In the next lines of the code  we can see a minium

template<typename T>
inline T max(T&a,T&b){
    return a>b ? b:a;
}

void delta_encode(unsigned char* buffer,int len){
    unsigned char last = 0;
    for (int i = 0; i <len ; ++i) {
        unsigned char current = buffer[i];
        buffer[i] = current-last;
        last = current;
    }
}

void delta_decode(unsigned char* buffer, int len) {
    unsigned char last = 0;
    for (int i = 0; i < len; ++i) {
        unsigned char delta = buffer[i];
        buffer[i] = delta + last;
        last = buffer[i];
    }
}

//here we can define the next part
double ad_all(array<double,100> array) {
    double s{0};
    for(auto& x:array){
        s+=x;
    }
    return s;
}

//in the next lines we can concentrate the next part of the main
//In the next lines is the next
template <typename iter,typename Value>
Value add(iter begin,iter end){
    Value* val;
    while (begin!=end){
         *val+=*begin;
         ++val;
    }
    return *val;
};

int main(){
    double ls[]{1,2,3,4,5};
    return add<double*,double>(ls,ls+5);
}

template <typename iter,typename Val>
/**
 * This is the classic manner as we can see
 * @tparam iter
 * @tparam Val
 * @param first
 * @param end
 * @param v
 * @return
 */
Val accumulate(iter first, iter end,Val v){
    do {
        v+=*first;
        ++first;
    }while (first!=end);
    return v;
};
void testing(){
    double ad[]={1,2,3,4};
    double r1 = accumulate(ad,ad+4,0.0);
    cout << "The acummulation is:" << r1;

}

template <typename iter,typename Val,typename Oper>
Val Acummulate(iter first,iter end,Val v,Oper operation){
    do{
        v = operation(v,*first);
        ++first;
    }while (first!=end);
    return v;
}
void testing_abstract() {
    double ad[] = {1, 2, 3, 4};
    double r1 = Acummulate(ad, ad + 4, 0.0, plus<double>());//this is the kind of operation as functor
    cout << "The value is the next" << r1;
    double r2 = Acummulate(ad, ad + 4, 1.0, multiplies<double>());
    cout << "The value is the next :" << r2;
}
//here we can declare the next part of the example as we can see.

template<typename T>
class String {
     friend bool operator==(String<T>&str_1,String<T>& str_2);
public:
    explicit String(unsigned s = 100) : size(s), values{new T[size]} {};

    String(const String<T> &str) : size(str.size), values{new T[size]} {
        Copy(str);
    }
    ~String(){
        delete[] values;
    }
    T& operator[](unsigned i);
    bool operator==(String<T>& str);
    unsigned get_size();
protected:
    T* values;
    unsigned size;
    void Copy(const String<T>&);
};
//this is to suposse that is not of the same time+
/**
 * This is the copy as the input another layer
 */
template<typename T>
void String<T>::Copy(const String<T>& str) {
    if(str.size!=size){
        throw out_of_range{"This is out of the range"};
    }
    for (int i = 0; i <str.size ; ++i) {
         str[i] = values[i];
    }
};

template<typename T>
bool String<T>::operator==(String<T> &str) {
    if (str.size!=size){
        throw out_of_range{"This is out of the range"};
    } else{
        for (int i = 0; i <str.size ; ++i) {
            if(str[i]!=values[i]){
                return false;
            }
        }
        return true;
    }
}

template<typename T>
bool operator==(String<T> &str_1, String<T> &str_2) {
    if(str_1.size!=str_2.size){
        return false;
    } else{
        for (int i = 0; i <str_1.size ; ++i) {
            if (str_1[i]!=str_2[i]){
                return false;
            }
        }
        return true;
    }
}
template<typename T>
T &String<T>::operator[](unsigned int i) {
    return values[i];
}

template<typename T>
unsigned int String<T>::get_size() {
    return size;
}

//here we can us the concept of ordered as we can see
template<typename T>
bool operator<(String<T>& string1, String<T>& string2) {
    bool eq = true;
    for (int i = 0; i < string2.size && string1.size; ++i) {
        if (string1[i] < string2[i]) {
            return true;
        } else if (string1[i] > string2[i]) {
            return !eq;
        }
    }
    if (string2.size < string1.size) {
        return false;
    }
    if(string1.size == string2.size){//this is a manner
        return false;
    }
    return true;
}
//the next is to use the next part as the main example as we can see

template<typename T>
bool Move_the_effect(T& x,T& y) {
    return x == y ? T{move(x)} != y : false;//here we can call the delete manner as we can see
}

//This is the manner of the control Structure

//this is the next semantics of COPOS like in mathematics
template<typename T>
T& max_generic(T&a,T&b){
    return a<b ? a:b;
}

//here we can define the next compact subroutine
namespace Est{

    /**
     *
     * Here we can call elegantly as sort(v) to sort the container c of type C
     * @tparam C
     * @param c
     */
    template<typename C>
    void sort(C& c){
        std::sort(c.begint(),c.end());

    }

    template<typename C, typename Pred>
    void sort_pred(C& c, Pred pred){
        std::sort(c.begin(),c.end(),pred);

    }
}
//here we can think in the next to be a special palindrome
//here we can transverse in the next sense of the word;

bool is_palindrome(const string& str){
    int init = 0;
    int last = str.length()-1;
    while(init<last){
        if (str[init]!=str[last]){
            return false;
        }
        ++init;
        --last;
    }
    //finally is true
    return true;
}

//the next is the same of the ptrs
//this is the manner as we can see
bool is_palindrome_ptr_version(const char* first, const char* last){
    while (first<last){
        if(*first!=*last){
            return false;
        }//this is will be updated as we can see.
        ++first;
        --last;
    }
    return true;
}


//algorithm of search as the find
//in this the case is the main example as we can see
template<typename In,typename T>
In find_another(In first,In last,const T& val){
    while (first!=last && *first!=val){
        ++first;
    }
    return first;

}

//here we can set the next semantics in the next lines of the code


template<typename In,typename Pred>
In find_if(In first, In last, Pred p){
    while (first!=last && !p(*first)){
        ++first;
    }
    return first;
}
//this is the level of the next semantics as we can see
//here we have the next logic
//here we can transverse the container in the next lines of the code
double* high(double* first,const double* last){
    double h = -1;
    double* max;

    for(auto p=first;p!=last;++p){
        if (h<*p){
            max = p;//this is the location in memory for the max;
            h =*p;
        }
    }
    return max;
};
//this is the manner to return the pointer of the main max as we can see
double* find_in_another_way(vector<double>& values) {
    double h = -1;//this is the init of the arbitrary manner as we can see
    double *max = nullptr;
    for (auto value:values) {
        if (h < value) {
            max = &value;
            h = value;
        }
    }
    return max;
};

//here we can define the next part of the main example
template<typename Iter>
Iter the_high(Iter first,Iter last){
    Iter high = first;//here we can define the high like the first
    for (auto p=first;p!=last;++p) {
        if(*high<*p){
            high = p;//update the value of the high;
        }
    }
    return high;//this is the value that be updated;
};


template<typename Iter>

void advance(Iter& iter,int n) {
    while (n > 0) {
        ++iter;
        --n;
    }
}
//here we can use the next part of the advance
//here we need that pointer move backward
template<typename Iter>
void advance_in_general(Iter& iter,int n){
    if(n<0) {
        --iter;
    } else{
        ++iter;
    }
}


template<typename C>
void prt(C& container){
    for(const auto& eleme:container){
        std::cout << eleme << '\n' << std::endl;
    };
}