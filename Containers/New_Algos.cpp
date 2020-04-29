//
// Created by erick-hdz on 25/04/20.
//
#include <iostream>
#include "Node_list.h"
#include "algorithm"


using namespace std;

template<typename Iter,typename Value>
Value sum(Iter begin,Iter end){
    Value* res;
    while (begin!=end){
        *res+=*begin;
        ++begin;
    }
    return *res;
}

int main(){
    double ls[]={1,2,3,4,5};
    return sum<double*,double>(ls,ls+5);
};
/**
 * Input:Iters,and values
 * Return accumultion valiues
 */
template<typename Iter,typename Value>
Value accumulation(Iter begin,Iter end,Value val){
    while (begin!=end){
        val+=*begin;
        begin++;
    }
    return val;
}

void test(){
    double ls[]{1,2,3,4,5};
    double res = accumulation(ls,ls+5,0.0);
    cout << "The value is the next :" << res;

}
template<typename T>
void PrintArray(T* array,const int counter){
    for (int i = 0; i!=counter ; ++i) {
        cout << "" << array[i];
    }
    cout << endl;
}

template<typename T>
void print_Array(T* array,const int counter){
    for(auto* p=array;*p!=counter;++p){
        std::cout << " " << *p;
    }
    std::cout << std::endl;
}

int test_print_Array(){
    double a[] = {1.1,2.2,3.3,4.4};
    PrintArray(a,4);
    print_Array(a,4);
}
template<typename T>
void Print_a(T* a){
    for (auto* p = a;p!=sizeof(a);++p) {
        std::cout << "" << *p;
    }
    std::cout << std::endl;
}
void reverse(float* a, int n){
    float temp = 0;
    for (int i = 0; i <n/2 ; ++i) {
        swap(a[i],a[n-i-1]);
    }
}

template<typename T>
void Shuffle(T* array,int n){
    T* new_array;
    for (int i = 0; i <n/2 ; ++i) {
        new_array[2*i] = array[i];
        new_array[2*i+1] = n/2+i;
    }
}

//here we can use the multiarray as a function
template<typename T>
void print_n(T* array){
    for (int i = 0; i!=3 ; ++i) {
        for (int j = 0; j!=5 ; ++j){
            std::cout << array[i][j] << '\t';
        }
    }
    std::cout << '\n';
}

//this is to insert a value, we can update as the next manner
template<typename T>
void insert(T* array,int& n,int x) {
    for (int i = n; i > 0 && array[i - 1] > x; --i) {
        array[i] = array[i - 1];
        array[i] = x;//here we can put the next as the main part of the main example
    }
    n++;//here we can update as we can see in the next part of the maon
}

template<typename T>
void insert_search_with_while(T* array, const int n){
    T temp;
    for (int i = 0; i <n ; ++i) {
        temp =array[i];
        int j = i-1;
        while (j>0 && array[j]>temp){
            array[j+1] = array[j];
        }
        array[j+1] = temp;
    }
}

template<typename T>
void insert_search_in_the_manner(T* array,int& n, T x) {
    for (int i = 0; i < n; ++i) {
        int j = i - 1;
        x = array[i];
        while (j > 0 && array[j] > x) {
            array[j + 1] = array[j];
        }
        //this is the location in the next manner as we can see
        array[j + 1] = x;
    }
    ++n;//This is updated as we can see in the next part of the main examp,e
}
//In this case we not change the size of the array,
// Is constant
// here we can define the next insertion_search algorithm
template<typename T>
void search_insert(T* array,const int n){
    T temp;//this is the key to insert:
    for (int i = 0; i <n ; ++i) {
        temp = array[i];//here we can put in some place
        for (int j = i; j>1 && array[j-1]>temp ; --j) {
            array[j] = array[j-1];
            array[j] = temp;
        }
    }
};
//This is the logic behind the main form as we can see
template<bool C,typename A,typename B>
struct Coditional{
    using type = A;
};
//this is a particular form as we can see of false:
template<typename A,typename B>
struct Coditional<false,A,B>{
    using type = B;
};
//this is the pure logic inside the conditionals

//the next is a manner as we can see in the next lines of the code

template<typename T>
void insert_value_with_for(T* array,int& n,T x){
    for (int i = 0; i <n ; ++i){
        x = array[i];//this is the location as we can see
        for (int j =i-1; j>0 && array[j]>x ; --j) {
             array[j+1] = array[j];
             array[j+1] = x;
        }
    }
    ++n;
}

//this is like other with while loop
template<typename T>
void insert_value(T* array,int& n,T x){
    for (int i = 0; i <n ; ++i) {
         int j = i-1;
         while(j>0 && array[j]>x){
             array[j+1] = array[j];
             --j;
         }
         array[j+1] =x;
    }
    ++n;
}


bool has_the_char(const string& s, char c){
    return std::find(s.begin(),s.end(),c)!=s.end();
}