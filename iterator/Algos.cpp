//
// Created by erick-hdz on 16/04/20.
//
#include <iostream>
#include <thread>
#include <string>
#include <algorithm>
#include <vector>

namespace standard{
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
/**
 * This is the classic manner of bubble sort algorithms
 * @param array
 * @param c
 */
void bubble_sort(double* array[], int c){
    double* temp;
    for (int i = 0; i <c ; ++i) {
        for (int j = 0; j <c-1 ; ++j) {
            if (*array[j]> *array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }

        }

    }
}
//
using namespace std;
// here we can seclare the string inside as we can see
void incatation(string& name){
    string s = name.substr(6,10);
    name.replace(0,5,"nicholas");
    name[0] = toupper(name[0]);

}

void f();
struct F{
    void operator()();
};
/**T
 * This is an operator Object
 */
void F::operator()() {};

void user(){
    thread t1{f};
    thread t2{F()};
    // here we can set the join as we can see
    t1.join();
    t2.join();
}

void function_1(vector<double>& vector){}
struct new_struct{
    vector<double>& vector;
    explicit new_struct(std::vector<double>& v):vector(v){};
    void operator()(){};
};

int main() {
    vector<double> vector_1{1, 3, 4, 5, 6, 6};
    vector<double> vector_2{1, 34, 5, 5, 6, 6};
    thread t2{new_struct{vector_2}};
    thread t1{function_1,vector_1};
    t1.join();
    t2.join();
    return 0;
}
void function_1_const(const vector<double>& vector);
class F_const{
public:
    F_const(const vector<double>& vector,double* res):v(vector),p{res}{};
    void operator()();
    /**
     * This is an access of the value as we can see
     * @return
     */
    double* get_value(){
        return p;
    }

private:
    const vector<double>& v;
    double* p = new double();
};

void F_const::operator()() {
}

/*
 * Here we can declare as the main function as we can see
 */
template <typename T>
constexpr bool is_arithmetic(){
    return std::is_arithmetic<T>::value;
}

int main_new(){
    vector<double> vector_1;
    vector<double> vector_2;
    //
    double res_1;
    double res_2;

    thread t_1{function_1_const,res_1};
    thread t_2{F_const,res_2};
    t_1.join();
    t_2.join();

    cout << res_1 << ':' << res_2 << '\n';

}