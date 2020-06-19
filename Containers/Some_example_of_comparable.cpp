//
// Created by erick-hdz on 02/06/20.
//
#include "iostream"
#include "vector"
#include "algorithm"




using namespace std;

/**
 * Here we call to use or call in all the script
 * @param vr
 */
void print_sort(vector<string>& vr);
struct Some_case;
void Print_the_Structure(vector<string>& vr);
struct  the_founder;//here we only need the declarations as we can see
template<typename T>
T& Binary_Search_recursive(T* array,int left, int right,const int& target);
//here we have the next part of the insertion sort
template<typename T>
void insertion_sort(T* array, int n);

template<typename T>
void Swap(T& x,T& y);

//here we have pure semantics logic to the object call
struct Some_case {
    bool operator()(const string &str1, const string &str2) {
        for (auto& x:str1) {
            for (auto& y:str2) {
                if (x == str2.length()) {
                    return false;
                }
                char xx = tolower(x);
                char yy = tolower(y);
                //here we have the next logic
                if(xx<yy){
                    return true;
                }
                else if(xx>yy){
                    return false;
                }
            }
        }
        return str1.length() == str2.length();
    }
};

//here we have the only the print as subroutine
void Print_the_Structure(vector<string>& vr) {
    for(auto& x:vr){
        std::cout << x << '\t';
    }
}


void print_sort(vector<string>& vr){
    //here we have the next comparable object with the semantics in the STD
    sort(vr.begin(),vr.end(),Some_case());
    //here we can only use the next part of the main example as we can see
    Print_the_Structure(vr);//calling the function
}

//here we can use the next call boolean object as we can see
/**
 * Here we only an structure in concrete case
 * As we can see
 */
struct the_founder{
    string name;
    int age;
    double value;
    ///
};
//here we can define the next part of the main example as we can see
//here we can construct as the type of some containers as we can see
//here we can declare a comparable object to sort with that

struct some_new_order{
    bool operator()(const the_founder& f1,const the_founder& f2){
        return f1.name < f2.name;
    };
    //that is because the semantic in the order was defined lastly in the
    //structure data
};

struct some_order_about_the_age{
    bool operator()(the_founder& f1,the_founder& f2){
        return  f1.age < f2.age;
    }
};
//this is another form of the order as we can see
struct order_by_value{
    bool operator()( the_founder& f1,the_founder& f2){
        return f1.value < f2.value;
    }
};


int some_test(){
    std::vector<the_founder> ej;
    std::sort(ej.begin(),ej.end(),some_new_order());
    return 0;//here we have the state as we can see
}

//here we can define the next procedure as we can see

int test_2(){
    vector<the_founder> ex_1;
    std::sort(ex_1.begin(),ex_1.end(),some_order_about_the_age());
}

int test_3(){
    vector<the_founder> ex;
    std::sort(ex.begin(), ex.end(),order_by_value());
    //the last is to call the last as we can see
}

//here we can set the binary search
/**
 *  Her is a non recursive manner to use binary search
 * @tparam T
 * @param array
 * @param target
 * @param n
 * @return
 */
template <typename T>
int binary_search(T* array,const T& target,int n){
    int left =0;
    int right =n;
    while (left<right){
        int location =(left+right)/2;//we focus in the middle as we can see
        if(array[location]==target){
            return location;
        }
        if(array[location]<target){
            left =location+1;
        } else {
            right = location-1;
        }
    }
}

//here we can declare the recursive version of binary_search

template<typename T>
int Binary_Search_recursive(T* array,int left,int right,const int& target){
    //here we have the next logic to the data
    if(left<right){
        std::cerr <<"Not found";
    }else{
        int location =(left+right)/2;
        if(array[location]==target){
            return location;
        }
        if(array[location]<target){
            Binary_Search_recursive(array,location+1,right,target);
        } else if(array[location]>target){
            Binary_Search_recursive(array,left,location-1);
        }
    }
};
//here we can declare as the next part of the main example as we can see.

//here we can implement the next part of the insertion sort

template<typename T>
void insertion_sort(T* array,int n){
    int i = 1;
    while (i<n){
        T  temp =array[i];
        int j = i-1;//here we have that the j is mutable as the inner loop as we can see
        while (j>0 && array[j]>temp){
            array[j+1] = array[j];
            --j;
        }
        array[j+1] = temp;
        ++i;
    }
}

//here we can declare the next insert element in an Algorithm

template<typename T>
void insert_element(T* array, const T& key,int& n){
    n = n+1;//update the size of the array as we can see
    key = array[n];
    int j = n-1;
    while(j>0 && array[j]>key){
        array[j] = array[j-1];
        --j;//here we need to update the manner as we can see
    }
    Swap(array[j],key);//here we can we can call the move() as the part of the main copy


}
//!---Here we have the next part of the main example ----!//
/**
 * Here we can define the next part of the example as we can see
 *
 * @param x
 * @param y
 */
template<typename T>
void Swap(T& x, T& y){
    T temp = x;//this is the trade off element as we can see.
    x = y;
    y = temp;
}

//here we can declare the next part of the algo bubblesort
template<typename T>
/**
 *
 * @tparam T
 * @param array
 * @param n, here we can  identified the n as len(A)
 */
void Bubble_sort(T* array,int& n){
    for (int i = 0; i < n ; ++i) {
        for (int j = n; j <i+1 ; --j) {
            //here we only call as the next part of the main example
            if(array[j+1]<array[j]){
                Swap(array[j+1],array[j]);
            }
        }
    }
}

//here we can introduce the next the_high_value() function
//here we can use the next part as the next part of the data as we can see


double* find_the_highest(vector<double>& v) {
    double sentinel = -1;
    double* the_highest = nullptr;

    //here we can use the constructor of the begin() and end of the for loop as the inside as we can see
    for (int i = 0; i <v.size() ; ++i) {
        if(sentinel<v[i]){
            the_highest = &v[i];
            sentinel = v[i];
        }
    }
    return the_highest;

};


double* the_highest(vector<double>&vr){
    double the_max = 0;
    double* the_max_alloc = &the_max;
    for (auto& x:vr) {
        if(the_max<x){
            the_max_alloc = &x;
            the_max = x;
        };
    }
    //so we return the value as we can see
    return the_max_alloc;
}

//here we can declare the next equivalent in the sense
//of generic computing
//this is the manner to use the iterator extending the idea of container as we can see
template<typename Iter>
Iter find_the_max(Iter i1,Iter i2){
    //here we can use the next part of the loop and find a loop invariant as we can see
    Iter max = i1;
    i1++;
    while(i1!=i2){
        if(*max<*i1){
            max = i1;
        }
        ++i1;
    }
    return max;
};
