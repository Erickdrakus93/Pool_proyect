//
// Created by erick-hdz on 17/06/20.
//

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>


using namespace std;
struct Node_list{};
bool is_prime(int n);
int sum_of_primes(int a,int b);
int main() {
    //here we use the main to execute the code
    int a, b;
    cin >> a >> b;
    auto x = sum_of_primes(a,b);
    std::cout << "The sum is" << x;
}


bool is_prime(int n){
    if(n<=1){
        return false;
    }
    for (int i = 2; i <n ; ++i) {
        if(i%n==0){
            return false;
        }
    }
    return true;
}

int sum_of_primes(int a,int b) {
    if (b > a) {
        std::cerr << "a must be less than b";
    }
    int sum = 0;
    while (a != b) {
        if (is_prime(a)) {
            sum += a;
        }
        ++a;
    }
    return sum;
}

