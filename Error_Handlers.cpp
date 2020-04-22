//
// Created by erick-hdz on 21/04/20.
//
#include <iostream>
#include <utility>
#include <exception>
#include <cstdio>

using namespace std;
struct My_error: public exception{
    const char* what() const noexcept override{
        return "This is the exception";
    }
};
struct Range_error: public exception{
    const char* what() const noexcept override{
        return "Max error";
    }
};

void function(int n){
    if (n<0){
         throw Range_error();
    }
    cout << "The value is :" << n << endl;

}

int main(){
    try {
        throw My_error();
    }
    catch (My_error& e) {
        cout<< "My exception caught" << endl;
        cout <<e.what() << std::endl;
    }
    catch (exception& s) {
        cout << s.what() << endl;
    }
}
/**
 *Here we can call another Exceptions childs of
 * the std::exceptions as we can se
 */

class No_copy{
public:
    explicit No_copy(const No_copy&)=delete;
};

class My_error_with: public exception{
    /**
     * This is an override manner as we can see
     * @return
     */
    const char* what() const noexcept override{
        return "This an error";
    }
};

