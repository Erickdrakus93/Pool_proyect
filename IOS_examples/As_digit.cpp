//
// Created by erick-hdz on 06/05/20.
//
#include "iostream"

using namespace std;

int digit(int n, int j) {
    for (int i = 0; i < j; ++i) {
        n /= 10;
    }
    return n % 10;
}
//here we can put the next part of the
//testing the last subroutines as we can see

bool is_triangular(int n){
    int i=0,sum=0;
    while(sum<n) {
        sum += ++i;
    }
    return sum==n;
}