//
// Created by erick-hdz on 24/05/20.
//
#include "iostream"
#include <cstdlib>
#include <ctime>
#include "random"
//note is the use of nullptr

int main(){

    const long int tosses =10000;
    long int hits =0;
    float x,y;
    unsigned seed = time(nullptr);
    std::srand(seed);
    //here we can define the next pointer
    for (int i = 0; i <tosses ; ++i) {
         x = float(random()) / RAND_MAX;
         y = float(random()) / RAND_MAX;
        if (x*x + y*y <1){
            ++hits;
        }
    }
    std::cout <<4 * hits /tosses << std::endl;

}