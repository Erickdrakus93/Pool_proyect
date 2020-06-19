//
// Created by erick-hdz on 08/06/20.
//
#include "iostream"
#include "vector"
#include "algorithm"
#include "thread"
#include <map>



//here we use the basic info
using namespace std;
/**
 *
 * @param products
 * @param prices
 * @param sold_prd
 * @param sold_prices
 * @return The number of errors as a counter errors as we can see
 */

int price_check(const vector<string>& products,
       const vector<float>& prices, const vector<string>& sold_prd,
      const vector<float>& sold_prices){
    int count = 0;
    auto x = products.begin();
    auto p = products.end();
    auto y = sold_prd.begin();
    auto z = sold_prd.begin();
    for (int i = 1; i <sold_prd.size() ; ++i) {
        while(y!=z && x!=p){
            //here we can see the iteration and the logic inside the make decisions
            if(sold_prices[i]!=prices[i] && *y==*x){
                ++count;
            }
            ++x;
            ++y;
        }
    }
    return count;
}
int check_pr(vector<string>& prd,vector<double>& prices,
        vector<string>& sell_prds,vector<double>& prs_sell){
    int count = 0;
    map<string,double> prd_prices;
    for (int i = 0; i <prd.size() ; ++i) {
        prd_prices.insert(make_pair(prd[i],prices[i]));
    }
    map<string,double> prd_sell;
    for (int j = 0; j <sell_prds.size() ; ++j) {
        prd_sell.insert(make_pair(sell_prds[j],prs_sell[j]));
    };
    //the last was created the maps
    for(auto& x:prd_sell){
        auto y = prd_prices.find(x.first);
        if(y!=prd_prices.end()){
            if(y->second!=x.second){
                ++count;
            }
        }
    }
    return count;
}

//here we can use the next part of the main example as we can see

void FuzzBuzz(int n){
    string s1{"Fuzz"};
    string s2{"Buzz"};
    for (int i = 0; i <=n ; ++i) {
        if(i%3==0 && i%5==0) {
            std::cout << s1 << s2 << '\n';
        }else{
            if(i%3==0){
                std::cout << s1 << '\n';
            }
            if(i%5==0){
                std::cout <<  s2 << '\n';
            }else{
                std::cout << i << '\n';
            }
        }
    }
}

//another manner to write the last
/**
 * Here we have another manner to use the check prices.
 * @param pr
 * @param prices
 * @param product_sold
 * @param prices_sold
 * @return
 */
int  check_price(const vector<string>& pr,const vector<float>&prices,
        const vector<string>&product_sold,const vector<float>&prices_sold) {
    int max_size;
    int count = 0;
    if (product_sold.size() > pr.size()) {
        max_size = product_sold.size();
    } else {
        max_size = pr.size();
    }
    for (int i = 0; i < max_size; ++i) {
        if (product_sold[i] == pr[i] && prices_sold[i] != prices[i]) {
            ++count;
        }

    }
    return count;

}

/**
 * Here we can see a semantics for Lambda Calculus with the next semantics
 * @param v
 * @param os
 * @param n
 */

void some_function(vector<int>& v,ostream& os, int n){
    for_each(v.begin(),v.end(),
            //here we can see the capture operator of the
            //semantics of lambda functions.
            [&os,n](int i){
        if (i%n==0){
            os << i << '\n';
        }
    });
}

struct some_struct{
    int n;
    ostream& os;
    //here we have the constructor
    some_struct(int s,ostream& os):n{s},os{os}{};
    //here we have the same semantics of the next part of the example
    void operator()(int i){
        if(i%n==0){
            os << i << '\n';
        }
    }
};

//so the call is like the next part of the main example

void the_same_function_as_the_last(vector<int>& v,ostream& os, int m){
    for_each(v.begin(),v.end(),some_struct(m,os));
}

bool is_palindrome(const string& str){
    auto begin =str.begin();
    auto end = str.end();
    while (begin<end){
        if(*begin!=*end){
            return false;
        }
        next(begin); //is semantically equivalent tot ++begin
        --end;
    }
    return true;
}

bool is_palindrome_with_char_as_the(const char* first,const char* second){
    while(first<second){
        if(*first!=*second){
            return false;
        }
        is_palindrome_with_char_as_the(first+1, second-1);//here we can call as recursive manner as we can see
    }
    return true;
}


//here we can write the next counter as we can see
/**
 * This is a counter of occurrences of the value as we can see
 * @tparam Iter
 * @tparam T
 * @param i1
 * @param i2
 * @param val
 * @return
 */
template<typename Iter,typename T>
int count(Iter i1,Iter i2,const T val){
    int count = 0;
    while (i1!=i2){
        if(*i2 == val){
            ++count;
        }
    }
    return count;
}

/**
 * Here we can define the next with some predicate
 * @tparam  Iter, value and a predicate
 * @return int, is the number of occurrences of val
 */
template<typename Iter,typename T,typename Pred>
int count_if_pr(Iter i1,Iter i2,const T value,Pred p){
    int count = 0;
    while(i1!=i2){
        //this is the condition statement
        if(*i1==value && p(value)){
            ++count;
        }
    }
    return count;
}

/**
 * This is the usual inner product as we can see
 * @tparam T
 * @param v1
 * @param v2
 * @return T value;
 */
template<typename T>
T dot_product(vector<T>& v1,vector<T>& v2){
     if(v1.size()!=v2.size()){
         std::cerr << "is not of the same size";
     }
     T init = 0;
    for (int i = 0; i <v2.size() ; ++i) {
           init += v1[i]*v2[i];
    }
    return init;
}

