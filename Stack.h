//
// Created by erick-hdz on 09/04/20.
//

#ifndef POOL_PROYECT_STACK_H
#define POOL_PROYECT_STACK_H

template<typename T>
class Stack {
public:
      explicit Stack(int a = 100):size(a),top(-1){
          data = new T[size];
     };
     ~Stack(){
          delete[] data;
      };
     void push(const T& t);
     T pop();
     bool is_full();
     bool is_empty();
     void swap(T& a,T& b);
private:
    int size;
     int top;
     T* data

};


#endif //POOL_PROYECT_STACK_H
